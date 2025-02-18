O programa tem por objetivo usar o algoritmo K-means para fazer segmentação de imagens PGM.

*ARQUIVOS

-> PgmData.c será usado para coletar dados de uma imagem PGM e salvar dados de uma imagem PGM.
-> kmeans.c fará a transformação de um array de dados usando o algoritmo K-means.
-> util.c contém a função da distância usada para calcular a distância entre um ponto qualquer do array e um centroide.
A distância em questão a ser usada será o cálculo  da distância de Manhattan de uma dimensão.

*CONSIDERAÇÕES

-> É possível fazer alterações em alguns tipos dados do programa:
   #define DATATYPE - Usado para definir o tipo do dado do array de transformação.
   #defineDIRETORIO - Usado para definir o nome do diretorio onde os arquivos PGM estão contidos.
   #defineQTDIMG - Usado para definir o número de máximo de imagens a serem lidas.
   #define K - Usado para definir o número de clusters.

O output do programa mostra os arquivos PGM lidos e tempo de execução final.  
