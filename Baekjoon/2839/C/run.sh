echo > file
for i in $(seq 3 20)
do
	echo "GYYOON DEBUG" $i >> file
	./main $i >> file
	echo "=========================" >> file
done
