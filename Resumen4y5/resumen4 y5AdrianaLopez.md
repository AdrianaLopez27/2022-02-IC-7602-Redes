### Resumen 4 y 5
### Adriana López Calderón 
### 2019293588
_____

## VERIFICACIÓN DE LOS PROTOCOLOS
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Los protocolos que se utilizan en la práctica, y los programas que los implementan, con frecuencia son complicados.

### Modelos de máquinas de estado finito
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Con esta técnica,cada máquina de protocolo siempre está en un estado específico en cualquier instante. Su estado consiste en todos los valores de sus variables, incluido el contador de programa, puede agruparse un gran número de estados a fin de analizarlos. Todos los demás estados pueden considerarse como transitorios(pasos en el camino hacia uno de los estados principales).

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Regularmente, los estados se escogen para que sean aquellos instantes en que la máquina de protocolo está esperando que ocurra el siguiente evento, el estado de la máquina de protocolo está determinado por completo por los estados de sus variables.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;De cada estado hay cero o más transiciones posibles a otros estados. Las transiciones ocurren cuando sucede algún evento. Un estado en particular se designa como estado inicial. Este estado corresponde a la descripción del sistema cuando comienza a funcionar, o en algún punto conveniente poco después.

Formalmente, un modelo de máquina de estados finitos de un protocolo se puede considerar como un cuádruple (S, M, I, T), donde:
* S es el conjunto de estados en que pueden estar los procesos y el canal.
* M es el conjunto de tramas que pueden intercambiarse a través del canal.
* I es el conjunto de estados iniciales de los procesos.
* T es el conjunto de transiciones entre los estados.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Otra propiedad importante de un protocolo es la ausencia de bloqueos irreversibles. Un bloqueo irreversible es una situación en la que el protocolo no puede seguir avanzando, o, un bloqueo irreversible se caracteriza por la existencia de un subconjunto de estados que es alcanzable desde el estado inicial y que tiene dos propiedades:
 > * No hay transición hacia fuera del subconjunto. 
 > * No hay transiciones en el subconjunto que causen un avance.

### Modelos de red de Petri
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Otra técnica para especificar protocolos formalmente.  Una red de Petri tiene cuatro elementos básicos: lugares, transiciones, arcos y tokens. Se utiliza una barra horizontal o vertical para indicar una transición. Cada transición tiene cero o más arcos de entrada, que llegan de sus lugares de entrada, y cero o más arcos de salida, que van a sus lugares de salida

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Se habilita una transición si hay por lo menos un token de entrada en cada uno de sus lugares de entrada. Cualquier transición habilitada puede dispararse a voluntad, quitando un token de
cada lugar de entrada y depositando un token en cada lugar de salida. Si el número de arcos de entrada no es igual al número de arcos de salida, no se conservarán los tokens. Si se habilitan dos o más transiciones, cualquiera de ellas puede dispararse.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Las redes de Petri pueden servir para detectar fallas de protocolo de una manera parecida a como se hace con máquinas de estados finitos.  pueden representarse convenientemente en una forma algebraica semejante a una gramática. Cada transición contribuye con una regla a la gramática. Cada regla especifica lugares de entrada y salida de la transición.

## BLUETOOTH
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; En 1994, L. M. Ericsson se interesó en conectar sus teléfonos móviles y otros dispositivos sin necesidad de cables. En conjunto con otras cuatro empresas (IBM, Intel, Nokia y Toshiba), formó un grupo de interés especial con el propósito de desarrollar un estándar inalámbrico para interconectar computadoras, dispositivos de comunicaciones y accesorios a través de radios inalámbricos de bajo consumo de energía, corto alcance y económicos. Al proyecto se le asignó el nombre Bluetooth, la idea original eran tan sólo prescindir de cables entre dispositivos, su alcance se expandió rápidamente al área de las LANs inalámbricas. 

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Bluetooth emitió en julio de 1999 una especificación de 1500 páginas acerca de V1.0. Un poco después, el grupo de estándares del IEEE que se encarga de las redes de área personal inalámbricas, la especificación de Bluetooth está dirigida a un sistema completo, de la capa física a la capa de aplicación

### Arquitectura de Bluetooth

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; La unidad básica de un sistema Bluetooth es una piconet, que consta de un nodo maestro y hasta siete nodos esclavos activos a una distancia de 10 metros.  En una misma sala (grande) pueden encontrarse varias piconets y se pueden conectar mediante un nodo puente,un conjunto de piconets interconectadas se denomina scatternet.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Además de los siete nodos esclavos activos de una piconet, puede haber hasta 255 nodos estacionados en la red. Éstos son dispositivos que el nodo maestro ha cambiado a un estado de bajo consumo de energía para reducir el desgaste innecesario de sus pilas. Lo único que un dispositivo en estado estacionado puede hacer es responder a una señal de activación por parte del maestro.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; La razón para el diseño maestro/esclavo es que los diseñadores pretendían facilitar la implementación de chips Bluetooth completos por debajo de 5 dólares. La consecuencia de esta decisión es que los esclavos son sumamente pasivos y realizan todo lo que los maestros les indican

### Aplicaciones de Bluetooth
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; La mayoría de los protocolos de red sólo proporcionan canales entre las entidades que se comunican y permiten a los diseñadores de aplicaciones averiguar para qué desean utilizarlos
![bluetooth](https://github.com/AdrianaLopez27/2022-02-IC-7602-Redes/blob/main/resp%20PC5Y6/bluetooth.png?raw=true)
* El perfil de acceso genérico no es realmente una aplicación, sino más bien la base sobre la cual se construyen las aplicaciones; su tarea principal es ofrecer una manera para establecer y mantener enlaces (canales) seguros entre el maestro y los esclavos. 
* El perfil de descubrimiento de servicios también es relativamente genérico; los dispositivos lo utilizan para descubrir qué servicios ofrecen otros dispositivos.
* El perfil de puerto serie es un protocolo de transporte que la mayoría de los perfiles restantes
utiliza. 
* El perfil de intercambio genérico define una relación cliente-servidor para el traslado de datos. Los clientes inician operaciones, pero tanto un cliente como un servidor pueden fungir
como esclavo

#### Perfiles está destinado a la conectividad:
* El perfil de acceso a LAN permite a un dispositivo Bluetooth conectarse a una red fija.
* El perfil de acceso telefónico a redes fue el propósito original de todo el proyecto; permite a una computadora portátil conectarse a un teléfono móvil que contenga un módem integrado, sin necesidad de cables. 
* El perfil de fax es parecido al de acceso telefónico a redes, excepto que posibilita a máquinas de fax inalámbricas enviar y recibir faxes a través de teléfonos móviles sin que exista una conexión por cable entre ambos.

#### Perfiles para telefonía.
* El perfil de telefonía inalámbrica proporciona una manera de conectar el handset (teléfono) de un teléfono inalámbrico a la estación base
* El perfil intercom hace posible que dos teléfonos se conecten como walkie-talkies. 

### La pila de protocolos de Bluetooth
* El estándar Bluetooth cuenta con muchos protocolos agrupados con poco orden en capas. La estructura de capas no sigue el modelo OSI, el modelo TCP/IP:
* La capa inferior es la capa de radio física, la cual es bastante similar a la capa física de los modelos OSI y 802. Se ocupa de la transmisión y la modulación de radio.
* La capa de banda base tiene algunos puntos en común con la subcapa MAC, aunque también incluye elementos de la capa física.
    * El administrador de enlaces se encarga de establecer canales lógicos entre dispositivos, incluyendo administración de energía, autenticación y calidad de servicio.
* La capa de middleware, que contiene una mezcla de diferentes protocolos.  Su propósito es permitir que dispositivos heredados lo utilicen con facilidad. 
* La capa superior es donde se ubican las aplicaciones y los perfiles, que utilizan a los protocolos de las capas inferiores para realizar su trabajo. 
    * Cada aplicación tiene su propio subconjunto dedicado de protocolos. Por lo general, los dispositivos específicos, como las diademas telefónicas, contienen únicamente los protocolos necesarios para su aplicación

### La capa de radio de Bluetooth
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; La capa de radio traslada los bits del maestro al esclavo, o viceversa. Es un sistema de baja potencia con un rango de 10 metros que opera en la  banda ISM de 2.4 GHz.Para asignar los canales de manera equitativa, el espectro de saltos de frecuencia se utiliza a 1600 saltos por segundo y un tiempo de permanencia de 625 µseg. Todos los nodos de una piconet saltan de manera simultánea, y el maestro establece la secuencia de salto.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Puesto que Bluetooth salta mucho más rápido que el 802.11, es más probable que un dispositivo Bluetooth dañe las transmisiones del 802.11 que en el caso contrario

### La capa de banda base de Bluetooth
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Esta capa convierte el flujo de bits puros en tramas y define algunos formatos clave. En la forma más sencilla, el maestro de cada piconet define una serie de ranuras de tiempo de 625 µseg y las transmisiones del maestro empiezan en las ranuras pares, y las de los esclavos, en las ranuras impares

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;La sincronización de saltos de frecuencia permite un tiempo de asentamiento de 250-260 µseg por salto para que los circuitos de radio se estabilicen. Es posible un asentamiento más rápido, pero a un mayor costo. 

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Cada trama se transmite por un canal lógico, llamado enlace, entre el maestro y un esclavo.
Hay dos tipos de enlaces. El primero es el ACL (Asíncrono no Orientado a la Conexión), que se utiliza para datos conmutados en paquetes disponibles a intervalos irregulares. El otro tipo de enlace es el SCO (Síncrono Orientado a la Conexión), para datos en tiempo real, como ocurre en las conexiones telefónicas. A este tipo de canal se le asigna una ranura fija en cada dirección. 

### La capa L2CAP de Bluetooth
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Tiene tres funciones principales: acepta paquetes de hasta 64 KB provenientes de las capas superiores y los divide en tramas para transmitirlos. Las tramas se reensamblan nuevamente en paquetes en el otro extremo. 

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Maneja la multiplexión y desmultiplexión de múltiples fuentes de paquetes. 
se encarga de la calidad de los requerimientos de servicio, tanto al establecer los enlaces como durante la operación normal. Asimismo, durante el establecimiento de los enlaces se negocia el tamaño máximo de carga útil permitido, para evitar que un dispositivo que envíe paquetes grandes sature a uno que reciba paquetes pequeños.

### Estructura de la trama de Bluetooth
Existen diversos formatos de trama: 
* Empieza con un código de acceso que identifica al maestro, cuyo propósito es que los esclavos que se encuentren en el rango de alcance de dos maestros sepan cuál tráfico es para ellos.
* Luego se encuentra un encabezado de 54 bits que contiene campos comunes de la subcapa MAC. 
* Posteriormente está el campo de datos, de hasta 2744 bits. Para una sola ranura de tiempo, el formato es el mismo excepto que el campo de datos es de 240 bits.
> En el campo de datos de las tramas ACL se utilizan varios formatos. Sin embargo, las tramas SCO son más sencillas: el campo de datos siempre es de 240 bits. Se definen tres variantes, que permiten 80, 160 y 240 bits de carga útil real, y el resto se utiliza para corrección de errores. 

