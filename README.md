# Controle de Volume com PIC18F4550

Este projeto utiliza o microcontrolador **PIC18F4550** para controlar o volume por meio de um potenciômetro. O comportamento do sistema é o seguinte:

- Quando o potenciômetro 1 está em **0%**, o display exibe **"0%"** na segunda linha e, na primeira linha, a mensagem **"Volume Mudo"**.
- De **1% até 20%**, a mensagem **"Volume Baixo"** aparece na primeira linha.
- De **21% a 84%**, apenas a porcentagem é exibida no display.
- De **85% a 99%**, a mensagem **"Volume Alto"** aparece.
- No nível de **100%**, o display mostra **"Volume Máximo"**.

O código foi escrito em **MikroC for PIC** e o arquivo `.hex` foi testado usando o software **PICSimLab**.

---

# Volume Control with PIC18F4550

This project uses the **PIC18F4550** microcontroller to control the volume via a potentiometer. The system behaves as follows:

- When Potentiometer 1 is at **0%**, the display shows **"0%"** on the second line, and **"Mute"** on the first line.
- From **1% to 20%**, the first line shows **"Low Volume"**.
- From **21% to 84%**, only the percentage is displayed.
- From **85% to 99%**, the message **"High Volume"** appears.
- At **100%**, the display shows **"Maximum Volume"**.

The code was written in **MikroC for PIC**, and the `.hex` file was tested using the **PICSimLab** software.
