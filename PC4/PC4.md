#### Tecnológico de Costa Rica  
#### Redes (IC 7602)
#### Prueba Corta 4
#### Adriana López Calderón 
***
## 1. Explique el concepto de Time Division Multiplexing y Frequency Division Multiplexing. (25 pts)

**Time Division Multiplexing:** Por medio de turnos, permite la utilización de todo el canal (ancho de banda), el asignar los turnos lo hace por medio de el algoritmo Round-Robin y ranuras de tiempo( cantidad de tiempo que está transmitiendo con el ancho de banda), también tiene tiempos de guarda, el cual es es periodo de tiempo en el que los datos están viajando. Es utilizado en redes telefónicas (celulares)

 **Frequency Division Multiplexing:** Esta técnica divide el espectro en bandas en bandas de frecuencia (canales lógicos) tal como la radio AM o FM, en otras palabras: tiene el ancho de banda del canal y crea canales lógicos. Las bandas deben ser grandes  y tener banda guardas que son separaciones de los canales lógicos y así evitar colisiones

## 2. Explique el concepto de colisión durante el proceso de asignación del canal comente las diferencias entre medios guiados y medios no guiados. (25 pts)

El proceso de asignación al canal pueden ser tanto estáticos como dinámicos en LANs y MANs, de forma estática la manera tradicional de asignar el canal es por medio de de FDM( Multiplexión por División de Frecuencia) la cual presenta problemas de interferencia entre los usuarios(colisión) cuando el número de emisores es grande y varía continuamente o cuando el tráfico se hace en rafagas, mientras que de forma dinámica la colisión es cuando dos tramas se transmiten de forma simultánea (se traslapan en el tiempo y señal resultante se altera).
En pocas palabras, las colisiones es cuando “chocan” las tramas

 Los medios guiados transmiten las ondas a través de un campo físico tales  como cable de cobre y fibra óptica, mientra los medios no guiados su señal no está confinada en un campo físico,transmite la señal ya sea por aire,agua o vacío como radio y láser a través del aire


## 3. ¿Como funciona el algoritmo de asignación del canal Aloha y Aloha Ranurado Explique (20 pts)

**ALOHA:** no era muy confiable, sus datos no eran encriptados y la estación central transmite toda la información que le llegaba, y no posee manera de direccionar un paquete a una sola estación. Es por ello que tiene 18% de éxito y 82% colisiones

**ALOHA ranurado:** en esta una estación funciona como estación de sincronización y las demás solo transmiten cuando la de sincronización lo indica, esto disminuye las colisiones en el aire por lo que su comportamiento es 37% ranuras  vacías,37% exito y 26% colisiones. Si se llegara a dar una  colisión se podría poner en waiting time a las  estaciones para retransmitir y evitar otra colisión

## 4. ¿Cuáles son las diferencias entre Hub y Switch? ¿Porqué razón el Switch es mejor?

Un **hub** es un repetidor o access point por la cual los paquetes pasan para llegar a su destino, tiene varios puertos y sirve para conectar varios dispositivos a simultáneamente, las transmisiones se dan por medio de un mecanismo llamado llamado difusión, es half.duplex  y el dominio de colisión está formado por todas las computadoras y medios que compartan. Mientras que los **switch** es un dispositivo de interconexión, regularmente usado para conectar equipos en red formando una LAN, es full-duplex y permite conectar segmentos VLAN 

Los switches son mejores ya que los hub presentan muchos retrasos y poseen alta probabilidad de colisión, mientras que los switch son bastante inteligentes para entregar las tramas a las estaciones adecuada,además permiten segregation of duties, principios del mínimo privilegio.

## 5. ¿Es posible transportar tramas Ethernet embebidas en imágenes PNG? Justifique su respuesta. (30 pts)

Sí,Ya que las tramas de ethernet o trama de datos(ya que se divide en diversos conjuntos de datos) que proporcionan información importante, son registros que en código binario y las imágenes png utilizan también un formato binario y son archivos de gráficos de trama que admiten comprimir los datos sin que haya perdidos, es posible encajar o embeber las tramas ethernet en las imágenes png

