###### _Adriana López Calderón &nbsp;&nbsp;&nbsp;   2019293588
 
 
 
# REDES DE EJEMPLO
Las redes de computadoras cubren muchos y diversos tipos de redes, tiene diferentes objetivos, escalamientos y tecnologías
## Internet
No es del todo una red, es un inmenso conjunto de redes diferentes que usan ciertos protocolos comunes y proporcionan ciertos servicios comunes
#### ARPANET
A fines de los 1950s, el DoD quería una red de control y comando que pudiera sobrevivir a una guerra nuclear, debido a que en esa época todas las comunicaciones militares usaban la red telefónica pública, que se consideraba vulnerable. La vulnerabilidad del sistema estaba en que la destrucción de algunas de las oficinas interurbanas clave podría fragmentar el sistema en muchas islas incomunicadas.

  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; En la década de 1960, el DoD firmó un contrato con RAND Corporation para encontrar una solución. Paul Baran, presentó el diseño de amplia distribución y tolerancia a fallas, puesto que las trayectorias entre cualquiera de las oficinas de conmutación eran ahora más grandes de lo que las señales análogas podían viajar sin distorsión, Baran propuso que se utilizara la tecnología digital de conmutación de paquetes a través del sistema. 

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Pasaron varios años después que el DoD aún no tenía un mejor sistema de control y comando, en octubre de 1957, la Unión Soviética lanzó el Sputnik. Por lo que Eisenhower encontró que la armada, el ejército y la fuerza aérea se peleaban por el presupuesto de investigación del Pentágono, entonces, creó una organización única de investigación para la defensa, ARPA (Agencia de Proyectos de Investigación Avanzada)
>En 1967 , Larry Roberts puso su atención hacia las redes. Se puso en contacto con varios expertos para decidir qué hacer. Entre ellos estaba Wesley Clark,  quien sugirió la construcción de una subred de conmutación de paquetes, dando a cada host su propio enrutado

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;En 1980 's, se conectaron redes adicionales, en particular LANs, a ARPANET y conforme crecía el escalamiento, encontrar hosts llegó a ser muy costoso, por lo que se creó el **DNS** (Sistema de Nombres de Dominio) para organizar máquinas dentro de dominios y resolver nombres de host en direcciones IP.

#### NSFNET
En los 70s, la NFS (Fundación Nacional para las Ciencias, de Estados Unidos) vio el impacto que ARPANET estaba teniendo en la investigación universitaria, ya que permitía  que científicos de todo el país compartieran datos y colaboraran en proyectos de investigación, pero para estar en ARPANET, la universidad debía tener un contrato de investigación con el DoD, y esto muchas no  lo tenían. Por lo que NSF diseñó un sucesor de ARPANET que pudiera estar abierto a todos los grupos de investigación de las universidades. Para tener algo concreto con que empezar, la NSF decidió construir una red dorsal (o troncal) para conectar sus seis centros de supercomputadoras.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;La NSF también fundó algunas redes regionales que se conectaban a la red dorsal para que los usuarios en miles de universidades, laboratorios de investigación, bibliotecas y museos, tuvieran acceso a cualquiera de las supercomputadoras y se comunicaran entre sí. Toda la red, incluyendo la red dorsal y las redes regionales, se llamó NSFNET.

#### Uso de Internet
El número de redes, máquinas y usuarios conectados a ARPANET creció rápidamente luego de que TCP/IP se convirtiera en el protocolo oficial en enero de 1983. Cuando NSFNET y ARPANET estaban interconectadas. Durante los 80s, las personas empezaron a ver el conjunto de redes como una interred y más tarde como Internet. Lo que  mantiene unida la Internet es el modelo de referencia TCP/IP y la pila de protocolos de TCP/IP. TCP/IP hace posible el servicio universal.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;A inicios de los 90s, Internet era muy visitada por investigadores académicos, del gobierno e industriales. Una nueva aplicación, WWW (World Wide Web) cambió todo eso y trajo millones de usuarios nuevos no académicos a la red. Esta aplicación no cambió ninguna de las características subyacentes pero las hizo más fáciles de usar, también hizo posible que un sitio estableciera páginas de información que contienen texto, imágenes, sonido e incluso vídeo, y vínculos integrados a otras páginas

## Redes orientadas a la conexión: X.25, Frame Relay y ATM ##
Desde el inicio de la conectividad surgió una guerra entre los que apoyan a las subredes no orientadas a la conexión (datagramas) y los que apoyan a las subredes orientadas a la conexión.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Al establecer de antemano una conexión, la subred puede reservar recursos como espacio de búfer y capacidad de procesamiento (CPU) en los enrutadores. Si se intenta establecer una llamada y los recursos disponibles son insuficientes, la llamada se rechaza y el invocador recibe una señal de ocupado. De esta manera, una vez que se establece una conexión, ésta da un buen servicio. Con una red no orientada a la conexión, si llegan demasiados paquetes al mismo enrutador al mismo tiempo, el enrutador se saturará y tal vez pierda algunos paquetes.

#### X.25 y Frame Relay ####
La X.25, que fue la primera red de datos pública. Para utilizar X.25, una computadora establecía primero una conexión con la computadora remota, es decir, hacía una llamada telefónica. Esta conexión daba un número de conexión para utilizarlo en los paquetes de transferencia de datos

#### Modo de Transferencia Asíncrona  (Modo de Transferencia Asíncrona)
Es otro tipo de red orientada a la conexión, ATM iba a resolver todos los problemas de conectividad y telecomunicaciones fusionando voz, datos, etc. ATM tuvo mucho más éxito que OSI y actualmente tiene un uso profundo dentro del sistema telefónico, con frecuencia en el transporte de los paquetes IP
- **Circuitos virtuales de ATM:** las redes ATM están orientadas a la conexión, el envío de datos requiere que primero se envíe un paquete para establecer la conexión. Conforme el mensaje de establecimiento sigue su camino a través de la subred, todos los conmutadores que se encuentran en la ruta crean una entrada en sus tablas internas tomando nota de la existencia de la conexión y reservando cualesquier recursos que necesite la conexión.
 Con ATM el hardware se puede configurar para enviar una celda entrante a múltiples líneas de salida, una propiedad necesaria para el manejo de un programa de televisión que se va a difundir a varios receptores.
- **El modelo de referencia ATM**: ATM tiene su propio modelo de referencia, el cual es diferente del OSI y también del TCP/IP, consta de tres capas: la física, la ATM y la de adaptación ATM, además de lo que el usuario desee poner arriba de ellas,ATM se ha diseñado para ser independiente del medio de transmisión.La capa ATM se encarga de las celdas y su transporte. Define la disposición de una celda e indica qué significan los campos del encabezado

## Ethernet
Internet y ATM se diseñaron para la conectividad de área amplia. Pero, muchas empresas, universidades y otras organizaciones tienen un gran número de computadoras que requieren interconexión. Esta necesidad dio origen a la red de área local donde la más popular es Ethernet . Lo llamaron Ethernet, por lo de luminiferous ether, a través del cual se pensó alguna vez que se propagaba la radiación electromagnética

## LANs inalámbricas: 802.11
Casi al mismo tiempo que aparecieron las computadoras portátiles, muchas personas quisieron poder conectar a Internet su computadora. En consecuencia, varios grupos empezaron a trabajar para cumplir con esta meta. El método más práctico es equipar las computadoras y las portátiles con transmisores y receptores de radio de onda corta que les permitan comunicarse. Este trabajo condujo rápidamente a que varias empresas empezaran a comercializar las LANs inalámbricas.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;El problema es que no había compatibilidad entre ninguna de ellas, hasta que finalmente, la industria decidió que un estándar de LAN inalámbrica sería una buena idea, por lo que al comité del IEEE que estandarizó las LANs alámbricas se le encargó la tarea de diseñar un estándar para LANs inalámbricas.

