for i in $(seq 3 5000)
do
	echo "GYYOON DEBUG" $i >> res
	./main $i >> res
done
