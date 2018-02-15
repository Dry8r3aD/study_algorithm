echo > res
for i in $(seq 3 20)
do
	echo "GYYOON DEBUG" $i >> res
	./main $i >> res
	echo "=========================" >> res
done
