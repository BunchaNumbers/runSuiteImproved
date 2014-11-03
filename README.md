runSuiteImproved
================

Bash script for improved c++ program testing

A bash script command line test suite for c++ programs.
  - Accepts a test suite file that includes the names of all the testing files
  - The program to be tested
  - Additional command line modifier that changes the behaviour of the program (current options)
    - Default (no additional commands)
      - Display Input followed by program output followed by expected output if an error is found
    - line (additional command)
      - Displays the input given
      - Followed by the line in which the program output differs from the expected output
      - Nothing is displayed if program runs correctly
