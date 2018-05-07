REPO_NAME="study_algorithm"
ROOT_DIR=$(find / -name "$REPO_NAME")
MAKE_FILE="C_sample_makefile"

echo "Script for creating new problem directory"

echo "Enter problem source ( Ex. baekjoon, codility, daily, etc )"
read prob_source

echo "Enter problem number"
read prob_num

echo "Enter which language to use (Ex. C, Python, Etc)"
read lang

if [ "$prob_source" = "baekjoon" ]
then
	PROB_DIR=$ROOT_DIR/Baekjoon
elif [ "$prob_source" = "codility" ]
then
	PROB_DIR=$ROOT_DIR/Codility
elif [ "$prob_source" = "daily" ]
then
	PROB_DIR=$ROOT_DIR/Daily-Programming
else
	echo "Not Pre-defined problem source"
	exit
fi

if [ -d "$PROB_DIR/$prob_num" ]
then
	echo "Problem directory exsits"
else
	echo "Creating problem directory"
	mkdir $PROB_DIR/$prob_num
fi

if [ -d "$PROB_DIR/$prob_num/$lang" ]
then
	echo "Language directory excists"
else
	echo "Creating language directory"
	mkdir $PROB_DIR/$prob_num/$lang
fi

echo $lang
if [ "$lang" = "C" ]
then
	if [ -f $PROB_DIR/$prob_num/$lang/Makefile ]
	then
		echo "Makefile excists for C language"
	else
		echo "Creating default Makefile"
		cp $MAKE_FILE "$PROB_DIR/$prob_num/$lang/Makefile"
	fi
else
	echo "Sample/Default makefile does not exsits for this language $lang"
fi

echo "Creating problem directory done"
