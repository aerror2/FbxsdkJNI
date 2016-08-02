alldochtml=`lynx -dump -listonly  docs.autodesk.com/FBX/2014/ENU/FBX-SDK-Documentation/cpp_ref/hierarchy.html  | grep 'http' | cut -b7-`
for i in $alldochtml; do 

txtfilename=`basename "$i"`
txtfilename=${txtfilename/%html/txt}
echo "$savefilename"
lynx -dump  -nolist  -nolog  -noreferer  -nonumbers  -width=512 "$i" > "$savefilename"
done

