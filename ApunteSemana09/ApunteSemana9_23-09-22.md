#### Tecnológico de Costa Rica  
#### Redes (IC 7602)
#### Apuntes fecha: 23/09/2022
#### Adriana López Calderón 

***
## WiMAX
> Da acceso al medio

* Espectro entre 2Ghz a los 11GHz
* Anchos de Canales de 3.5MHz para WiMAX fijo de 1.25 a 20 MHz para WiMAX móvil
* Soporta bajada de 12.6Mbps
* Time division duplex
* Tecnología orientada a conexión

  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; WiMax es público, captura los datos en el aire. Asigna canales(vende ancho de banda pequeño),protocolo comercial, necesita hardware especial. El problema que presenta WiMAX es que el equipo que se ocupa es direccional.
  
### Encriptado
![Encriptado](https://github.com/AdrianaLopez27/2022-02-IC-7602-Redes/blob/main/imagenes%20Apuntes%202/WiMAX1.png?raw=true)

> CRC: Código de Redundancia Cíclica

![CRC](https://github.com/AdrianaLopez27/2022-02-IC-7602-Redes/blob/main/imagenes%20Apuntes%202/WiMAX2.png?raw=true)
# Capa de Red
## Conmutación por Almacenamiento
En redes se habla de packages (paquetes) y datagramas
![conmutacion](https://github.com/AdrianaLopez27/2022-02-IC-7602-Redes/blob/main/imagenes%20Apuntes%202/ConmutacionXAlmacenamiento.png?raw=true)
* Los paquetes se dividen en múltiples tramas
* Las tramas dependiendo del medio se dividen en segmentos

![conmutacion](https://github.com/AdrianaLopez27/2022-02-IC-7602-Redes/blob/main/imagenes%20Apuntes%202/ConmutacionXAlmacenamiento2.png?raw=true)
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Los **routers**  se encargan de manejar el tráfico (por dónde y cuándo salen los paquetes). Toman las tramas y los segmentos, los ensamblan y verifican que la información esté bien, luego lo descompone de nuevo y envía al host destino.
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Un paquete de capa de red tiene un formato y un CRC.
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Traceroute o Tracert(en Windows)** sirve para conocer por donde están pasando los paquetes

## Servicio sin Conexión
* Los paquetes se envían independientemente de la red y se enrutan de manera independiente
* Los paquetes se llaman datagramas
* Se le llama red de datagrama
* Internet protocol

 
> *Los paquetes al enviarlos no siempre toman el mismo camino
 *Las topologías de internet se pueden ver como un gráfico
*Internet como protocolo no garantiza la entrega de paquetes (pero garantiza que hace lo mejor posible)

## Servicio Orientado a Conexión
* Se establece una ruta entre el enrutador de origen en la red y se enrutan de manera independiente
> Calcula la ruta óptima antes de hacer el envío
* Cada paquete tiene una id de circuito
> Si se pierde un router en la ruta, se pierde la conexión, por lo que debe calcular una nueva ruta y empezar de nuevo
* Los VC(Virtual Circuit) se almacenan en los routers
> Los routers deben tener un control de qué paquetes pasaron por ellos, los paquetes llevan un TTL(Time to live) y va disminuyendo, si este llega a 0 el router no lo transmite,  Si en lugar de TTL tiene cantidad de saltos, este cada vez que pasa por un router disminuye su número y si llega a 0 se descarta
* La ruta se conoce como Virtual Circuit
* Se le llama red de circuitos virtuales

## Comparación
![comparacion](https://github.com/AdrianaLopez27/2022-02-IC-7602-Redes/blob/main/imagenes%20Apuntes%202/Comparaci%C3%B3n.png?raw=true)
## Algoritmo de Enrutamiento
* Software que elige rutas de salida
* Establece por donde sale la información
* La mejor ruta puede cambiar en el transcurso
* Subprocesos
    * Enrutamiento:Seleccionar las mejores rutas
    * Reenvio:Buscar en las tablas de enrutamiento por donde sacar un paquete entrante
* Características: exactitud, sencillez, robustez, estabilidad,equidad y eficiencia
* Debe manejar los cambios de topología
* Algoritmos no adaptativos(enrutamientos estáticos):no usan datos para tomar decisiones
Define rutas estáticas en los routers y que por dichas rutas salgan los paquetes
* Algoritmo adaptativo:(enrutamiento dinámico):cambios con los datos recolectados


El router tiene enlaces, los cuales tienen asociadas varias características tales como el bandwidth(BW),dentro del router se definen las tabla de ruteo( colección de enlaces y reglas)
![enrutamiento](https://github.com/AdrianaLopez27/2022-02-IC-7602-Redes/blob/main/imagenes%20Apuntes%202/Algoritmo%20de%20Enrutamiento.png?raw=true)
Cada una de las tablas debe manejar de ruteo tienen una métrica para establecer prioridades

## Principios de Optimización
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Calcula la ruta de un punto a los demás puntos y crea un árbol, por lo que conoce las rutas óptimas
* Busca la mejor ruta cost-effective
* Si el router “j”  se encuentra en la ruta óptima entre los routers  “i” y “k”, la ruta óptima entre  “j” y “k” se encuentra contenida en esta
* Forma un Sink Tree(no es único)
* Directed Acyclic Graph

> **Netflow:** Es un estándar comúnmente utilizado para monitorear datos de flujo de red, análisis de tráfico

## Algoritmos básicos de enrutamiento
> Actualmente ya no se usan

* Algoritmos de la ruta más corta
    * Conoce todo el grafo de antemano
    * Dijkstra o Floyd
    * Pesos/Etiquetas
* Inundación:los routers toman decisiones basadas en el conocimiento local
    * Cada paquete se envía en todas las líneas de salida, menos por la que ingresó
    * Contador de Saltos
    * Listas de paquetes ha visto

> Inundación envía los paquetes a todos, para evitar que llegue varias veces el mismo paquete, se puede tener una tabla.

## RIP(Routing Information Protocol)
> Tiene una tabla con todos los routers y métricas

* Llamado vector de distancia y Bellman-Ford
* Routers tienen una tabla indexada para cada router en la red, contiene los datos línea preferida de salida y una estimación de tiempo/distancia a destino(métrica)
* Un router debe conocer las distancias de todos sus vecinos
* Si usa una métrica de retardo de propagación envía paquetes ECO
* Se comparten las tablas entre vecinos

![RIP](https://github.com/AdrianaLopez27/2022-02-IC-7602-Redes/blob/main/imagenes%20Apuntes%202/rip2.png?raw=true)
