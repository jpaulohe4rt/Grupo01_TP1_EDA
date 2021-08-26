# Grupo 01 - TP1 EDA

## Como adicionar funções na biblioteca

Quando você adicionar funções em bibliotecas já compiladas deve na pasta raiz do projeto recompilar as funções da sua biblioteca.

~~~c
gcc -c ./lib/libfunction/<nome da função>
~~~

Após recompilar as funções você deve recompilar nossa biblioteca colocando todos os arquivos com extensão .o .
Antes disso navegue para a pasta lib no seu terminal.

~~~c
cd ./lib
~~~

Agora só falta recompilar o arquivo.

~~~c
ar cr libgroup.a ../< nome do arquivo .o > ../< nome do arquivo .o >`
~~~

Por fim volte a pasta raiz e compile o arquivo main com as novas funções.

~~~c
cd ../
gcc main.c -lgroup01 -o main -I include -L lib
~~~

## Como criar uma branch e fazer um Pull Request

1. Realize um Fork do projeto.
2. Crie um branch com a nova feature (`git checkout -b feature/add-novo-arquivo`)
3. Realize o Commit (`git commit -m 'Add new file'`)
4. Realize o Push no Branch (`git push origin feature/add-novo-arquivo`)
5. Abra um Pull Request.

## Comandos Básicos GIT

Copiar o repositorio para sua maquina.

~~~git
git clone "caminho-do-repositorio"
~~~

Adicionar um arquivo.

~~~git
git add <arquivo>`) ou para adicionar todos os arquivos (`git add *`)
~~~

Para commitar suas alterações.

~~~git
git commit -m "Comentario das Alterações"
~~~

Atualizar o repositorio.

~~~git
git pull
~~~~

## Instalação do ambiente para C

[Windows](https://github.com/jpaulohe4rt/c4noobs/blob/master/src/2-Ambiente/2-Ambiente-windows.md)
</br>
[Linux](https://github.com/jpaulohe4rt/c4noobs/blob/master/src/2-Ambiente/3-Ambiente-linux.md)

## Autores

- **João Paulo Lima da Silva**
- **Maurício Machado Fernandes Filho**
- **Samuel Furtado Avila**
- **Iago Oliveira Monteiro Ribeiro**
- **Bernado Chaves Pissutti**
