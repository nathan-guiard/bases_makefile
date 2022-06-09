SRC = text.txt

DEST = copie

${DEST}: ${SRC}
	cat ${SRC} > ${DEST}

${SRC}:
	echo -n "Bonjour!" > ${SRC}

