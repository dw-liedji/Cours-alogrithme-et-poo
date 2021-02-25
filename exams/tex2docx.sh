 #! /bin/sh
 #comment
 echo "Conversion de latex en microsoft word."
 mkdir docxbfg
 pandoc normale.tex --standalone -o docxbfg/normale.docx
 pandoc normale_sol.tex --standalone -o docxbfg/normale_sol.docx
 pandoc rattrapage.tex --standalone -o docxbfg/rattrapage.docx
 pandoc rattrapage_sol.tex --standalone -o docxbfg/rattrapage_sol.docx
 xdg-open docxbfg


