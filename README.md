# Arduino Motor Control Project

## Simulación
[Ver proyecto en Tinkercad](https://www.tinkercad.com/things/c5ENBJhsm82-motor-control-pullup)

## Descripción
Código Arduino para controlar un motor usando dos botones con indicadores LED.

## Componentes
- Arduino
- Motor DC
- 2 Botones pulsadores
- 2 LEDs
- Resistencias

## Configuración de Pines
```cpp
int motor = 3;     // Pin del Motor
int button1 = 6;   // Botón de encendido
int button2 = 7;   // Botón de apagado
int ledON = 4;     // LED de motor encendido
int ledOFF = 5;    // LED de motor apagado
```

## Funcionalidad
- Botón 1: Enciende motor y LED verde
- Botón 2: Apaga motor y enciende LED rojo

## Características
- Uso de `INPUT_PULLUP`
- Control independiente de motor y LEDs
- Antirebote básico con `delay(20)`

## Personalización
- Ajustar pines según conexión
- Modificar lógica de control

## Licencia
Este proyecto está bajo la Licencia MIT - ver el archivo [LICENSE](LICENSE) para más detalles.

## Autor
[Pedro Carranza](https://github.com/draexx)
