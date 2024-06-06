# INTEGRANTES
- **Kaique Rodrigues Zaffarani** (RM: 556677) 
- **Guilherme Santos Nunes** (RM: 558989)
- **Henry Evideira Paulo** (RM: 554985)


## LINKS
- **[SIMULADOR](https://www.tinkercad.com/things/caiS2UM6vG7-gs-simulador/editel?returnTo=%2Fthings%2FcaiS2UM6vG7-gs-simulador%3Fsharecode%3DH-b8QUJkQ7_S-XZZ2pjAcXow0_1kT6jryNqjPAjow3I)** <br>
- **[VÍDEO EXPLICATIVO](https://drive.google.com/file/d/1Hir3Cyxv1ZMqxPem49OsZWO7HxN-5HMu/view?usp=sharing)**


## DETALHES DO PROJETO
![FOTO](assets/img%20-%20simulador.png)

A **[O20](https://www.g20.org/pt-br/g20-social/grupos-de-engajamento/oceans-20#:~:text=Sobre%20o%20O20&text=A%20criação%20do%20Oceans20%20pela,é%20plural%20em%20suas%20características.)**, em parceria com o projeto **Blue Future [(FIAP)](https://www.fiap.com.br)**, está procurando capturar e visualizar dados com métodos de fácil entendimento sobre a saúde dos oceanos e a poluição que os afetam. Com isso, decidimos elaborar um **protótipo** (e seu **simulador**) capaz de detectar gases tóxicos no ar, além de medir a temperatura da superfície dos oceanos.

Para o **protótipo**, consideramos o dióxido de carbono (CO2) como gás a ser detectado, pois ele é, de acordo com pesquisas, um dos principais causadores de acidificação, alteração química e diminuição do pH dos oceanos.

## INSTRUÇÕES DE USO - SIMULADOR
Para melhor experiência no **simulador**, é necessário compreender algumas informações intrínsecas presentes nele:

- **TEMPERATURA:** <br>
![FOTO](assets/img%20-%20medindo%20temperatura.png)<br>
*Para alterar valores de temperatura, basta iniciar simulação e ajustar o nível clicando no sensor TMP36.*

- **DETECÇÃO DE GÁS:** <br>
![FOTO](assets/img%20-%20gas%20detectado.png)<br>
*Dependendo da distância entre o gás e o sensor MQ-135, é possível visualizar mensagens de alerta. Caso o gás esteja bem próximo do MQ-135 (como na imagem), a sirene é acionada.*

- **VALORES:** <br>
![FOTO](assets/img%20-%20alterando%20valores.png) <br>
*É possível alterar os valores sublinhados de azul, ocasionando a mudança do raio de distância que cada alerta será transmitido no LCD, apesar de estarem previamente calibrados.*


## INSTRUÇÕES DE USO - PROTÓTIPO
Para total utilização e aperfeiçoamento do sistema de acordo com suas necessidades, é necessário compreender algumas informações essenciais presentes na codificação do **protótipo**:

- **FUNDAMENTAIS:** <br>
![FOTO](assets/img%20-%20bibliotecas%20e%20definições%20com%20entradas%20específicas.png)<br>
*Esta área já inclui as bibliotecas, define as portas de entrada (números na imagem) e procede a declaração dos sensores no Arduino.*

- **NÍVEL DE PPM PARA O SENSOR DE GÁS:** <br>
![FOTO](assets/img%20-%20nível%20de%20ppm%20médio.png)<br>
*Nesta função, a unidade de medida ppm (também nomeada para ser um ponto flutuante), comumente utilizada para registrar quantidade de gases presente em ambiente (quanto maior o ppm, mais gás está presente), está sendo colocada em uma média entre 350 e 30.000 para o sensor MQ-135 (destinando a detectar dióxido de carbono). Entretanto, a média de ppm pode ser alterada para trabalhar em diferentes âmbitos.*

- **TEMPERATURA:** <br>
![FOTO](assets/img%20-%20função%20necessária%20para%20temperatura.png) <br>
*Para esta função de temperatura, a biblioteca já trabalha para o sensor captar a temperatura ambiente (sem necessidade de intervenção).*

## REQUISITOS
Para a implementação e execução do código do **protótipo** (localizado na pasta: **src**) no programa Arduino, a prévia instalação das bibliotecas dos sensores (localizadas na pasta: **libraries**) é necessária. Em caso de dúvida, segue instruções de instalação mais precisas:

- **[GUIA DE INSTALAÇÃO DE BIBLIOTECAS NO ARDUINO](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries/)**

Agora, para a construção do **protótipo**, serão necessários:

- **1x** Cabo USB para Arduino Uno
- **1x** Arduino Uno R3 [(Documentação)](https://docs.arduino.cc/hardware/uno-rev3/)
- **1x** LCD (Liquid Crystal Display) 16x2 [(Documentação)](https://docs.arduino.cc/learn/electronics/lcd-displays/)
- **1x** Sensor de temperatura TMP36 [(Documentação)](https://www.analog.com/media/en/technical-documentation/data-sheets/TMP35_36_37.pdf) 
- **1x** Sensor de gás MQ-135 [(Documentação)](https://www.winsen-sensor.com/d/files/manual/mq135.pdf?campaignid=10468521783&adgroupid=135332376389&feeditemid=&targetid=dsa-1958599263050&device=c&creative=593920368849&keyword=&gad_source=1&gclid=CjwKCAjwmYCzBhA6EiwAxFwfgGtVGMuAILsZwqGfpexRrEZZ-bUzUsNWcz1ESKLDSoVo8_5WExG3SxoCWH4QAvD_BwE)
- **1x** Piezoeletric buzzer ativo de 5V [(Documentação)](https://wiki-content.arduino.cc/documents/datasheets/PIEZO-PKM22EPPH4001-BO.pdf)
- **1x** Resistor de 330 Ω (ohms)
- **1x** Resistor de 1 kΩ
- **1x** Resistor de 4 kΩ
- **1x** Placa de ensaio (de preferência)
- **26x** Cabos Jumper macho-macho (contados com a placa de ensaio incluída)


## IMPORTANTE
**ATENÇÃO**: <br>
O código do **simulador** e do **protótipo** são diferentes!

A escala termométrica utilizada em ambos os projetos é: **Celsius (ºC)**.

O **protótipo** deve ser utilizado para propósitos experimentais! Não recomendamos o uso do mesmo em projetos profissionais ou que envolva segurança humana ou ambiental. Além disso, não nos responsabilizamos por eventuais danos.

Os sensores, cabos, resistores e circuitos correm risco de quebra ou queima se em contato direto com a água. Todavia, uma vez que o **protótipo** se encontra confinado em um recipiente transparente, é possível captar a temperatura da água, exceto gases.


## REFERÊNCIAS
- **[Gases de efeito estufa estão privando nossos oceanos de oxigenação](https://www.unep.org/pt-br/noticias-e-reportagens/reportagem/gases-de-efeito-estufa-estao-privando-nossos-oceanos-de#:~:text=Gases%20do%20efeito%20estufa%20são,nitroso%20e%20hexafluoreto%20de%20enxofre.)**
  
- **[A acidificação dos oceanos: por que ocorre e quais são as suas consequências?](https://www.iberdrola.com/sustentabilidade/acidificacao-oceanos#:~:text=Além%20de%20piorarem%20a%20qualidade,afetando%20gravemente%20os%20organismos%20marinhos.
)**
- **[Temperatura dos oceanos quebraram recorde todos os dias em um ano](https://gizmodo.uol.com.br/temperatura-dos-oceanos-quebraram-recorde-todos-os-dias-em-um-ano/
)**

- **[Como medir o dióxido de carbono](https://www.vaisala.com/sites/default/files/documents/VIM-G-How-to-measure-CO2-Application-Note-B211228PT.pdf)**
