# Digispark-Scripts-
Scripts do digispark para quem ta começando no estudo de hardware hacking

# Instalando o ambiente
Instalação do Ambiente para codar o digispark usando o arduino 
1. Instalar os [drivers](https://github.com/digistump/DigistumpArduino/releases) do arduino para usar a ide
2. Baixar a ide do [Arduino](https://www.arduino.cc/en/software) que é onde iremos fazer/usar os scipts do arduino (eu ultilizo a versão 1.8.0)
3. Após baixar, abra a ide e vá em **Arquivo** > **Preferencias** e ponha essa url : http://digistump.com/package_digistump_index.json ou essa :
https://raw.githubusercontent.com/ArminJo/DigistumpArduino/master/package_digistump_index.json (caso a primeira dê erro como foi o meu caso)
em "URLs adicionais para gerenciador de placas"
4. Após baixar, vá em **Ferramentas** > **Placa** > **Gerenciamento de placas** e pesquise por **Digistump AVR boards**  e instale o pacote
5. Após isso, vá em **Ferramentas** > **Placas** e selecione **Digispark**
Após isso só usar scripts prontos ou Codar os seus próprios na linguagem arduino baseada em C++
Passo a Passo original em inglês : https://digistump.com/wiki/digispark/tutorials/connecting

# Biblioteca-DigikeyboardPtBr-
Biblioteca feita por [Gadotti](https://github.com/Gadotti/DigisparkScripts), cuja qual possibilita usarmos os scripts em telcados ASCII 
(Teclados usados aqui no Brasil)
Para instalar é só colar o arquivo em **libraries** > **Keyboards** > **scr** e declarar a biblioteca na hora de codar

# Scripts 
#### RickRoll em ASCII
Abre o PowerShell e roda o o meme do Never Gonna Give you up (rickroll) em ASCII 
#### Capturar Senhas WI-Fi 
Captura as senhas WI-FI salvas no computador e as manda para o seu webhook ( entre em webhook.site e copie a sua url própria que o site irá gerar )
1. modifique a linha de código 27 e cole a sua URL gerada pelo webhook, depois é só plugar o digispark e e esperar o led vermelho acender
2. Após isso é só abrir sua url de webhook e o as senhas capturadas estarão lá


