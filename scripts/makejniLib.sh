allsource=`ls jni "*.cpp" | tr '\n' ' ' `

g++    $allsource
