1. Escreva o texto "Ola mundo cruel!" em um arquivo denominado "Ola_mundo.txt". Apresente o conte�do deste arquivo no terminal.

- echo "ola mundo cruel!" >Ola_mundo.txt
- cat ola_mundo.txt

2. Apresente o nome de todos os arquivos e pastas na pasta 'root'.

- ls /

3. Apresente o tipo de todos os arquivos e pastas na pasta 'root'.
- 

4. Apresente somente as pastas dentro da pasta 'root'.
- ls -d */

5. Descubra em que dia da semana caiu o seu anivers�rio nos �ltimos dez anos.

- date -d "02/05/2018"
- date -d "02/05/2017"
- date -d "02/05/2016"
- date -d "02/05/2015"
- date -d "02/05/2014"
- date -d "02/05/2013"
- date -d "02/05/2012"
- date -d "02/05/2011"
- date -d "02/05/2010"
- date -d "02/05/2009"
- date -d "02/05/2008"

Para as quest�es a seguir, use a pasta no endere�o https://github.com/DiogoCaetanoGarcia/Sistemas_Embarcados/raw/master/Questoes/Arqs_aula_02.zip

6. Liste somente os arquivos com extens�o .txt.
- ls *.txt

7. Liste somente os arquivos com extens�o .png.
- ls *.png

8. Liste somente os arquivos com extens�o .jpg.
- ls *.jpg

9. Liste somente os arquivos com extens�o .gif.
- ls *.gif

10. Liste somente os arquivos que contenham o nome 'cal'.
- ls | grep cal

11. Liste somente os arquivos que contenham o nome 'tux'.
- ls | grep tux

12. Liste somente os arquivos que comecem com o nome 'tux'.
- ls | grep tux*
