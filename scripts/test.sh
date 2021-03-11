build/test/Voltra_test --gtest_output=xml:build/reports/gtestresults.xml
awk '{ if ($1 == "<testcase" && match($0, "notrun")) print substr($0,0,length($0)-2) "><skipped/></testcase>"; else print $0;}' build/reports/gtestresults.xml > build/reports/gtestresults-skipped.xml
mv build/reports/gtestresults.xml build/reports/gtestresults.off