cmake_minimum_required (VERSION 2.6...3.10.2)
project (CGenerator C)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=implicit-function-declaration")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=missing-declarations")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=int-conversion")

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

find_package(OpenSSL)

if (OPENSSL_FOUND)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DOPENSSL")
    if(CMAKE_VERSION VERSION_LESS 3.4)
        include_directories(${OPENSSL_INCLUDE_DIR})
        include_directories(${OPENSSL_INCLUDE_DIRS})
        link_directories(${OPENSSL_LIBRARIES})
    endif()
endif()

set(pkgName "mednet_edc_api")

# this default version can be overridden in PreTarget.cmake
set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 1)

if( (DEFINED CURL_INCLUDE_DIR) AND (DEFINED CURL_LIBRARIES))
    include_directories(${CURL_INCLUDE_DIR})
    set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
else()
    find_package(CURL 7.58.0 REQUIRED)
    if(CURL_FOUND)
        include_directories(${CURL_INCLUDE_DIR})
        set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
    endif()
endif()

set(SRCS
    src/list.c
    src/apiKey.c
    src/apiClient.c
    src/binary.c
    external/cJSON.c
    model/object.c
    model/coding.c
    model/coding_list.c
    model/components_schemas_interval_forms_item.c
    model/components_schemas_metadata_error.c
    model/components_schemas_record_create_request_item.c
    model/form.c
    model/form_list.c
    model/inline_object.c
    model/inline_object_1.c
    model/inline_object_2.c
    model/inline_object_3.c
    model/inline_object_4.c
    model/inline_object_5.c
    model/interval.c
    model/interval_list.c
    model/job.c
    model/keyword.c
    model/metadata.c
    model/pagination.c
    model/query.c
    model/query_comment.c
    model/query_list.c
    model/record.c
    model/record_job_status.c
    model/record_list.c
    model/record_revision.c
    model/record_revision_list.c
    model/role.c
    model/site.c
    model/site_list.c
    model/sort.c
    model/study.c
    model/study_list.c
    model/subject.c
    model/subject_list.c
    model/user.c
    model/user_list.c
    model/variable.c
    model/variable_list.c
    model/visit.c
    model/visit_list.c
    api/AdministrationAPI.c
    api/CodingsAPI.c
    api/FormsAPI.c
    api/IntervalsAPI.c
    api/JobsAPI.c
    api/QueriesAPI.c
    api/RecordRevisionsAPI.c
    api/RecordsAPI.c
    api/SitesAPI.c
    api/StudiesAPI.c
    api/SubjectsAPI.c
    api/VariablesAPI.c
    api/VisitsAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/any_type.h
    model/coding.h
    model/coding_list.h
    model/components_schemas_interval_forms_item.h
    model/components_schemas_metadata_error.h
    model/components_schemas_record_create_request_item.h
    model/form.h
    model/form_list.h
    model/inline_object.h
    model/inline_object_1.h
    model/inline_object_2.h
    model/inline_object_3.h
    model/inline_object_4.h
    model/inline_object_5.h
    model/interval.h
    model/interval_list.h
    model/job.h
    model/keyword.h
    model/metadata.h
    model/pagination.h
    model/query.h
    model/query_comment.h
    model/query_list.h
    model/record.h
    model/record_job_status.h
    model/record_list.h
    model/record_revision.h
    model/record_revision_list.h
    model/role.h
    model/site.h
    model/site_list.h
    model/sort.h
    model/study.h
    model/study_list.h
    model/subject.h
    model/subject_list.h
    model/user.h
    model/user_list.h
    model/variable.h
    model/variable_list.h
    model/visit.h
    model/visit_list.h
    api/AdministrationAPI.h
    api/CodingsAPI.h
    api/FormsAPI.h
    api/IntervalsAPI.h
    api/JobsAPI.h
    api/QueriesAPI.h
    api/RecordRevisionsAPI.h
    api/RecordsAPI.h
    api/SitesAPI.h
    api/StudiesAPI.h
    api/SubjectsAPI.h
    api/VariablesAPI.h
    api/VisitsAPI.h

)

include(PreTarget.cmake OPTIONAL)

set(PROJECT_VERSION_STRING "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")

# Add library with project file with project name as library name
add_library(${pkgName} ${SRCS} ${HDRS})
# Link dependent libraries
if(NOT CMAKE_VERSION VERSION_LESS 3.4)
    target_link_libraries(${pkgName} PRIVATE OpenSSL::SSL OpenSSL::Crypto)
endif()
target_link_libraries(${pkgName} PUBLIC ${CURL_LIBRARIES} )
target_include_directories(
    ${pkgName} PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

include(PostTarget.cmake OPTIONAL)

# installation of libraries, headers, and config files
if (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in)
    install(TARGETS ${pkgName} DESTINATION lib)
else()
    include(GNUInstallDirs)
    install(TARGETS ${pkgName} DESTINATION lib EXPORT ${pkgName}Targets)

    foreach(HDR_FILE ${HDRS})
        get_filename_component(HDR_DIRECTORY ${HDR_FILE} DIRECTORY)
        get_filename_component(ABSOLUTE_HDR_DIRECTORY ${HDR_DIRECTORY} ABSOLUTE)
        file(RELATIVE_PATH RELATIVE_HDR_PATH ${CMAKE_CURRENT_SOURCE_DIR} ${ABSOLUTE_HDR_DIRECTORY})
        install(FILES ${HDR_FILE} DESTINATION include/${pkgName}/${RELATIVE_HDR_PATH})
    endforeach()

    include(CMakePackageConfigHelpers)
    write_basic_package_version_file(
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            VERSION "${PROJECT_VERSION_STRING}"
            COMPATIBILITY AnyNewerVersion
    )

    export(EXPORT ${pkgName}Targets
            FILE "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Targets.cmake"
            NAMESPACE ${pkgName}::
            )

    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            @ONLY
            )

    set(ConfigPackageLocation lib/cmake/${pkgName})
    install(EXPORT ${pkgName}Targets
            FILE
            ${pkgName}Targets.cmake
            NAMESPACE
            ${pkgName}::
            DESTINATION
            ${ConfigPackageLocation}
            )
    install(
            FILES
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            DESTINATION
            ${ConfigPackageLocation}
    )
endif()

# make installation packages
include(Packing.cmake OPTIONAL)

# Setting file variables to null
set(SRCS "")
set(HDRS "")


## This section shows how to use the above compiled library to compile the source files
## set source files
#set(SRCS
#    unit-tests/manual-AdministrationAPI.c
#    unit-tests/manual-CodingsAPI.c
#    unit-tests/manual-FormsAPI.c
#    unit-tests/manual-IntervalsAPI.c
#    unit-tests/manual-JobsAPI.c
#    unit-tests/manual-QueriesAPI.c
#    unit-tests/manual-RecordRevisionsAPI.c
#    unit-tests/manual-RecordsAPI.c
#    unit-tests/manual-SitesAPI.c
#    unit-tests/manual-StudiesAPI.c
#    unit-tests/manual-SubjectsAPI.c
#    unit-tests/manual-VariablesAPI.c
#    unit-tests/manual-VisitsAPI.c
#)

##set header files
#set(HDRS
#)

## loop over all files in SRCS variable
#foreach(SOURCE_FILE ${SRCS})
#    # Get only the file name from the file as add_executable does not support executable with slash("/")
#    get_filename_component(FILE_NAME_ONLY ${SOURCE_FILE} NAME_WE)
#    # Remove .c from the file name and set it as executable name
#    string( REPLACE ".c" "" EXECUTABLE_FILE ${FILE_NAME_ONLY})
#    # Add executable for every source file in  SRCS
#    add_executable(unit-${EXECUTABLE_FILE} ${SOURCE_FILE})
#    # Link above created library to executable and dependent library curl
#    target_link_libraries(unit-${EXECUTABLE_FILE} ${CURL_LIBRARIES} ${pkgName} )
#endforeach(SOURCE_FILE ${SRCS})
