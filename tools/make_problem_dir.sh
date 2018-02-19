REPO_NAME="study_algorithm"
ROOT_DIR=$(find / -name "$REPO_NAME")
MAKE_FILE="C_sample_makefile"

echo "Script for creating new problem directory"

echo "Enter problem number"
read prob_num

echo "Enter which language to use (Ex. C, Python, Etc)"
read lang

if [ -d "$ROOT_DIR/$prob_num" ]
then
	echo "Problem directory exsits"
else
	echo "Creating problem directory"
	mkdir $ROOT_DIR/$prob_num
fi

if [ -d "$ROOT_DIR/$prob_num/$lang" ]
then
	echo "Language directory excists"
else
	echo "Creating language directory"
	mkdir $ROOT_DIR/$prob_num/$lang
fi

echo $lang
if [ "$lang" = "C" ]
then
	if [ -f $ROOT_DIR/$prob_num/$lang/Makefile ]
	then
		echo "Makefile excists for C language"
	else
		echo "Creating default Makefile"
		cp $MAKE_FILE "$ROOT_DIR/$prob_num/$lang/Makefile"
	fi
else
	echo "Sample/Default makefile does not exsits for this language $lang"
fi

echo "Creating problem directory done"
