###### Adriana López Calderón    2019293588
###### Resumen 2 y Resumen 3 
 
 
 

#### Estructura del sistema telefónico
 &nbsp;&nbsp;&nbsp;&nbsp;Tan pronto como Alexander Graham Bell patentó el teléfono en 1876 (tan sólo unas cuantas horas antes que su rival, Elisha Gray), hubo una gran demanda por su nuevo invento. El mercado inicial fue para la venta de teléfonos, los cuales se vendían en pares. Le tocaba al cliente conectarlos con un solo alambre. Los electrones regresaban por tierra. Si el propietario de un teléfono deseaba comunicarse con otros n propietarios de teléfono, tenía que enlazar alambres individuales a todas las n casas. Después de un año, las ciudades se cubrieron de alambres que pasaban sobre las casas y los árboles convirtiéndose en una maraña.
 
 &nbsp;&nbsp;&nbsp;&nbsp;Bell tuvo la suficiente visión para darse cuenta de esto y formó la Bell Telephone Company y muy pronto surgieron por todas partes oficinas de conmutación del Bell System y la gente quiso hacer llamadas de larga distancia entre ciudades, de modo que el Bell System empezó a conectar las oficinas de conmutación. El problema original pronto reapareció: conectar cada oficina de conmutación con todas las demás por medio de un cable entre ellas pronto dejó de ser práctico, así que se inventaron las oficinas de conmutación de segundo nivel.

&nbsp;&nbsp;&nbsp;&nbsp;Para 1890, las tres partes principales del sistema telefónico ya estaban en su lugar: las oficinas de conmutación, los cables entre los clientes y las oficinas de conmutación, el modelo básico del Bell System ha permanecido intacto en lo esencial por más de 100 años.

&nbsp;&nbsp;&nbsp;&nbsp;Previo a la división de AT&T en 1984, el sistema telefónico fue organizado como una jerarquía de múltiples niveles, con alta redundancia. A pesar de su simplicidad, la siguiente descripción da una idea de la situación. Cada teléfono tiene dos alambres de cobre que van directamente a la oficina central local de la compañía telefónica. Por lo general, la distancia va de 1 a 10 km, y en las ciudades es más corta que en las áreas rurales

&nbsp;&nbsp;&nbsp;&nbsp;Si un suscriptor conectado a una oficina central determinada llama a otro suscriptor conectado a la misma oficina central, el mecanismo de conmutación dentro de la oficina establece una conexión eléctrica directa entre los dos circuitos locales. Esta conexión permanece intacta mientras dura la llamada.
Si el teléfono al que se llama está conectado a otra oficina central, se tiene que usar un procedimiento diferente. Cada oficina central tiene varias líneas salientes a uno o más centros de conmutación cercanos, llamados oficinas interurbanas (o, si están dentro de la misma área local, oficinas en tándem). Estas líneas se llaman troncales de conexión interurbanas.

En síntesis, el sistema telefónico consiste en tres componentes principales:
* Circuitos locales (cables de par trenzado que van hacia las casas y las empresas).
* Troncales (fibra óptica digital que conecta a las oficinas de conmutación).
* Oficinas de conmutación (donde las llamadas pasan de una troncal a otra).


#### El circuito local: módems, ADSL e inalámbrico

&nbsp;&nbsp;&nbsp;&nbsp; El circuito local se conoce también como de “última milla” (la conexión hacia el cliente), aunque la longitud puede ser de varias millas. Durante más de 100 años ha utilizado señalización analógica y es probable que continúe haciéndolo durante algún tiempo, debido al costo elevado de la conversión a digital. No obstante, el cambio se está dando incluso en este último bastión de la transmisión analógica

&nbsp;&nbsp;&nbsp;&nbsp;Cuando una computadora desea enviar datos digitales sobre una línea analógica de acceso telefónico, es necesario convertir primero los datos a formato analógico para transmitirlos sobre el circuito local. Un dispositivo conocido como módem realiza esta conversión

&nbsp;&nbsp;&nbsp;&nbsp;La señalización analógica consiste en la variación del voltaje con el tiempo para representar un flujo de información. Si los medios de transmisión fueran perfectos, el receptor recibiría exactamente la misma señal enviada por el transmisor. Por desgracia, los medios no son perfectos, por lo cual la señal recibida no es la misma que la transmitida. Si los datos son digitales, esta diferencia puede conducir a errores.
Las líneas de transmisión tienen tres problemas principales: atenuación, distorsión por retardo y ruido. La atenuación es la pérdida de energía conforme la señal se propaga hacia su destino. La pérdida se expresa en decibeles por kilómetro. La cantidad de energía perdida depende de la frecuencia.

&nbsp;&nbsp;&nbsp;&nbsp;Los diferentes componentes de Fourier se propagan a diferente velocidad por el cable. Esta diferencia de velocidad ocasiona una distorsión de la señal que se recibe en el otro extremo.
Otro problema es el ruido, que es energía no deseada de fuentes distintas al transmisor. El movimiento al azar de los electrones en un cable causa el ruido térmico y es inevitable. La diafonía se debe al acoplamiento inductivo entre dos cables que están cerca uno del otro.

##### Módems

&nbsp;&nbsp;&nbsp;&nbsp;Tanto la atenuación como la velocidad de propagación dependen de la frecuencia, es indeseable tener un rango amplio de frecuencias en la señal. Desgraciadamente, las ondas cuadradas, como las de los datos digitales, tienen un espectro amplio y por ello están sujetas a una fuerte atenuación y a distorsión por retardo. Estos efectos hacen que la señalización de banda base (CC, corriente continua) sea inadecuada, excepto a velocidades bajas y distancias cortas

&nbsp;&nbsp;&nbsp;&nbsp;En la modulación de amplitud se usan dos niveles diferentes de amplitud para representar 0 y 1, respectivamente. En la modulación de frecuencia, conocida también como modulación por desplazamiento de frecuencia, se usan dos (o más) tonos diferentes. En la forma más simple de la modulación de fase la onda portadora se desplaza de modo sistemático 0 o 180 grados a intervalos espaciados de manera uniforme

> Es común la confusión de los conceptos ancho de banda, baudio, símbolo y tasa de bits; el ancho de banda de un medio es el rango de frecuencias que atraviesa al medio con atenuación mínima. Es una propiedad física del medio y se mide en hertzios (Hz). La tasa de baudios es la cantidad de muestras por segundo que se realizan. Cada muestra envía una porción de información, es decir, un símbolo. Por lo tanto, la tasa de baudios y la tasa de símbolos significan lo mismo

&nbsp;&nbsp;&nbsp;&nbsp; Todos los módems modernos transmiten tráfico en ambas direcciones al mismo tiempo, la conexión que permite el flujo de tráfico en ambas direcciones de manera simultánea se conoce como dúplex total, la conexión que permite el tráfico en ambas direcciones,
pero sólo en un sentido a la vez, se denomina semidúplex y la conexión que permite el tráfico en una sola dirección se conoce como símplex

##### Circuitos locales inalámbricos
&nbsp;&nbsp;&nbsp;&nbsp;Al igual que ADSL, LMDS asigna el ancho de banda de manera asimétrica, dando prioridad
al canal descendente. Con la tecnología actual, cada sector puede contar con 36 Gbps de flujo descendente y 1 Mbsp de flujo ascendente, compartidos por todos los usuarios del sector

#### Troncales y multiplexión
&nbsp;&nbsp;&nbsp;&nbsp;Existen esquemas complejos para multiplexar muchas conversaciones en una sola troncal física. Estos esquemas de multiplexión se pueden dividir en dos categorías principales: FDM (Multiplexión por División de Frecuencia) y TDM (Multiplexión por División de Tiempo). 
&nbsp;&nbsp;&nbsp;&nbsp;En FDM el espectro de frecuencia se divide en bandas de frecuencia, y cada usuario posee exclusivamente alguna banda. En TDM los usuarios esperan su turno (en round-robin), y cada uno obtiene en forma periódica toda la banda durante un breve lapso de tiempo. 
> La radiodifusión AM ilustra ambas clases de multiplexión. El espectro asignado es de alrededor de 1 MHz, aproximadamente de 500 a 1500 kHz. A los diferentes canales lógicos (estaciones) se les asigna una frecuencia distinta, y cada uno funciona en una porción del espectro con una separación entre canales lo bastante grande para evitar la interferencia.

#### Multiplexión por división de frecuencia
&nbsp;&nbsp;&nbsp;&nbsp; Los esquemas de FDM que se emplean en el mundo están normalizados hasta cierto punto.
Un estándar muy difundido es el de 12 canales de voz a 4000 Hz multiplexados dentro de la banda de 60 a 108 kHz. Esta unidad se llama grupo

#### Multiplexión por división de longitud de onda 
&nbsp;&nbsp;&nbsp;&nbsp; Para los canales de fibra óptica se utiliza una variante de la multiplexión por división de frecuencia llamada WDM (Multiplexión por División de Longitud de Onda).Cuando el número de canales es muy grande y las longitudes de onda están espaciadas entre sí de manera estrecha, por ejemplo a 0.1 nm, el sistema se conoce como DWDM (WDM Densa)

#### Multiplexión por división de tiempo
&nbsp;&nbsp;&nbsp;&nbsp; TDM puede manejarse por completo mediante dispositivos digitales y a ello se debe su popularidad en los últimos años. Desgraciadamente, sólo se puede utilizar para datos digitales. Puesto que los circuitos locales producen señales analógicas, se necesita una conversión de analógico a digital en la oficina central, en donde todos los circuitos locales individuales se juntan para combinarse en troncale
&nbsp;&nbsp;&nbsp;&nbsp; PCM (Modulación por Codificación de Impulsos) es el corazón del sistema telefónico moderno. En consecuencia, virtualmente todos los intervalos de tiempo dentro del sistema telefónico son múltiplos de 125 µseg
> Un método llamado modulación diferencial por codificación de impulsos consiste en transmitir no la amplitud digitalizada sino la diferencia entre su valor actual y el previo. Puesto que los saltos de ±16 en una escala de 128 no son probables, podrían bastar 5 bits en lugar de 7

#### SONET/SDH
&nbsp;&nbsp;&nbsp;&nbsp; SONET tenía que hacer posible la interconexión de diferentes operadores telefónicos. El logro de este objetivo requirió que se definiera un estándar de señalización con respecto a la longitud de onda, la temporización, la estructura del entramado, etcétera

&nbsp;&nbsp;&nbsp;&nbsp; La trama básica de SONET es un bloque de 810 bytes que se emite cada 125 µseg. Puesto que SONET es síncrona, las tramas se emiten haya o no datos útiles que enviar. La velocidad de 8000 tramas/seg coincide perfectamente con la tasa de muestreo de los canales PCM que se utilizan en todos los sistemas de telefonía digital

### TELEVISIÓN POR CABLE
&nbsp;&nbsp;&nbsp;&nbsp;Tanto los sistemas inalámbricos como los fijos jugarán un papel importante en las redes futuras. Sin embargo, hay una alternativa para la conectividad de redes fija que está tomando mucha importancia: las redes de televisión por cable

#### Televisión por antena comunal
&nbsp;&nbsp;&nbsp;&nbsp; El sistema consistió inicialmente en una antena grande en la cima de una colina para captar la señal de televisión, un amplificador, llamado amplificador head end, para reforzarla y un cable coaxial para enviarla a las casas de las personas. En sus primeros años, la televisión por cable fue llamada televisión por antena comunal.

#### Internet a través de cable
&nbsp;&nbsp;&nbsp;&nbsp;A través de los años, el sistema de televisión por cable creció y los cables entre las distintas ciudades se reemplazaron por fibra de ancho de banda alto, de manera similar a lo que sucedió con el sistema telefónico. Un sistema con fibra para distancias considerables y cable coaxial para las casas se conoce como sistema HFC (Red Híbrida de Fibra Óptica y Cable Coaxial). Los convertidores electroópticos que interactúan entre las partes óptica y eléctrica del sistema se llaman nodos de fibra. Debido a que el ancho de banda de la fibra es mucho mayor al del cable coaxial, un nodo de fibra puede alimentar múltiples cables coaxiales

#### Asignación de espectro
&nbsp;&nbsp;&nbsp;&nbsp;Debido a que todas las señales de televisión son descendentes, es posible utilizar amplificadores ascendentes que funcionen en la región de 5–42 MHz y amplificadores descendentes que sólo funcionen a 54 MHz y mayor.
&nbsp;&nbsp;&nbsp;&nbsp; Los cables coaxiales largos no son mejores para transmitir señales digitales que los circuitos locales largos, por lo que aquí también se necesita la modulación analógica. El esquema usual es tomar cada canal descendente de 6 u 8 MHz y modularlo con QAM-64 o, si la calidad del cable es muy buena, QAM-256. Con un canal de 6 MHz y QAM-64, obtenemos casi 36 Mbps. Cuando se sustrae la sobrecarga, la carga útil de la red es de aproximadamente 27 Mbps. Con QAM-256, dicha carga es de aproximadamente de 39 Mbps

#### Módems de cable
&nbsp;&nbsp;&nbsp;&nbsp;El acceso a Internet requiere un módem de cable, un dispositivo que tiene dos interfaces: una en la computadora y la otra en la red de cable. En los primeros años de Internet por cable, cada operador tenía un módem de cable patentado, que era instalado por un técnico de la compañía de cable. Sin embargo, pronto quedó claro que un estándar abierto podría crear un mercado de módems de cable competitivo y bajar los precios, con lo que se alentaría el uso del servicio. Además, al permitir que los clientes compren los módems de cable en tiendas y que los instalen ellos mismos

> La interfaz módem a computadora es directa. En la actualidad, con frecuencia es la Ethernet a 10-Mbps (y en ocasiones es USB). En el futuro, todo el módem podría ser una pequeña tarjeta conectada en la computadora, al igual que con los módems internos V.9x

#### ADSL en comparación con el cable
&nbsp;&nbsp;&nbsp;&nbsp; Los dos utilizan la fibra óptica en la red dorsal, pero difieren en el extremo. El cable utiliza cable coaxial; ADSL, cable de par trenzado. La capacidad de carga teórica del cable coaxial es de cientos de veces más que el cable de par trenzado. Sin embargo, la capacidad máxima del cable no está disponible para los usuarios de datos porque la mayor parte del ancho de banda del cable se desperdicia en cosas inútiles
&nbsp;&nbsp;&nbsp;&nbsp; En la práctica, es difícil generalizar acerca de la capacidad efectiva. Los proveedores de ADSL indican específicamente el ancho de banda (por ejemplo, flujo descendente de 1 Mbps, flujo ascendente de 256 kbps) y por lo general logran alrededor de 80% de manera consistente. Los proveedores de cable no dan ninguna indicación pues la capacidad efectiva depende de cuántas personas estén actualmente activas en el segmento de cable del usuario



