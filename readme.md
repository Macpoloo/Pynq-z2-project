<h1> Processamento immagini potenziato tramite overlay creato in Vivado 2018.3  </h1>

specifica coming soon


<h3> HARDWARE UTILIZZATO </h3>  
l'implementazione di questo progetto è stata fatta sulla scheda Pynq-z2 che si basa su piattaforme Xilinx .  

Dettagli della scheda http://www.pynq.io/  http://www.pynq.io/board.html


<h3> PIATTAFORME SOFTWARE </h3>  
Vivado 2018.3/Vivado HLS 2018.3/Jupyter Notebook


<h3>LIBRERIE UTILIZZATE IN PYTHON</h3> 
Numpy/CV2

<h3> RIGENERARE PROGETTO VIVADO(DMA) </h3>  

Dma è un progetto base da cui partire per capire il funzionamento di Vivado e Vivado HLS e Vivado 2018.3.
in questo progetto vengono fusi due IP in un unico overlay e sono una piccola ALU e un sistema che utilizzando il DMA 
ci consente di caricare in memoria un vettore di numeri(o di tuple per il processamento immagini) e di riprenderlo modificato 
grazie al settaggio della costante che andra a influenzare i valori del vettore stesso  v[i]*const .

1.Per rigenerare il progetto MULT-CONST all'interno di DMA entra su vivado 2018.3  
2.Andare sulla" tcl console" in basso alla main page di vivado  
3.Digitare "cd" sul percorso dove si trova la cartella  
4.Appena ti trovi nella cartella, digitare "source project_2.tcl"  

<h3> RIGENERARE PROGETTO VIVADO(vdma) </h3>  

Vdma è un progetto che si basa su un'architettura video utilizzando IP e i moduli che fanno parte 
di Vivado library .
Questo design punta alla gestione ottimale dell'hdmi per leggere , scrivere e manipolare  flussi video.

1.Per rigenerare il progetto hdmi.tcl all'interno di VDMA entra su vivado 2018.3  
2.Andare sulla" tcl console" in basso alla main page di vivado  
3.Digitare "cd" sul percorso dove si trova la cartella  
4.Appena ti trovi nella cartella, digitare "hdmi.tcl.tcl" 

<h3> JUPYTERNOTEBOOK</h3> 

Nelle cartelle bitstream si trovano i file da importare su jupyter per far funzionare multiply.ipynb e hdmi.ipynb
dove viene utilizzata la libreria cv2 per il filtering delle immagini
