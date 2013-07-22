# CMake generated Testfile for 
# Source directory: /home/lakers/Downloads/VTK/IO/Testing/Cxx
# Build directory: /home/lakers/Downloads/VTK/IO/Testing/Cxx
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(TestSQLDatabaseSchema "/home/lakers/Downloads/VTK/bin/IOCxxTests" "TestSQLDatabaseSchema")
ADD_TEST(TestSQLiteDatabase "/home/lakers/Downloads/VTK/bin/IOCxxTests" "TestSQLiteDatabase")
SET_TESTS_PROPERTIES(TestSQLiteDatabase PROPERTIES  RUN_SERIAL "ON")
ADD_TEST(TestDataObjectIO "/home/lakers/Downloads/VTK/bin/IOCxxTests" "TestDataObjectIO")
ADD_TEST(TestDataObjectXMLIO "/home/lakers/Downloads/VTK/bin/IOCxxTests" "TestDataObjectXMLIO")
SET_TESTS_PROPERTIES(TestDataObjectXMLIO PROPERTIES  RUN_SERIAL "ON")
ADD_TEST(Array-TestArraySerialization "/home/lakers/Downloads/VTK/bin/ArrayIOCxxTests" "TestArraySerialization")
ADD_TEST(Array-TestArrayDenormalized "/home/lakers/Downloads/VTK/bin/ArrayIOCxxTests" "TestArrayDenormalized")
