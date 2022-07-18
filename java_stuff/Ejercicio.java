/*
Juan David Castrejón Bermúdez
*/

import java.util.Scanner;
import java.lang.Math;

public class Ejercicio{
    public static void main(String[] args){
        Ficha[] fichas_disponibles = {
            new Ficha(0,0), new Ficha(0,1), new Ficha(0,2), new Ficha(0,3), new Ficha(0,4), new Ficha(0,5), 
            new Ficha(0,6), new Ficha(1,1), new Ficha(1,2), new Ficha(1,3), new Ficha(1,4), new Ficha(1,5), 
            new Ficha(1,6), new Ficha(2,2), new Ficha(2,3), new Ficha(2,4), new Ficha(2,5), new Ficha(2,6), 
            new Ficha(3,3), new Ficha(3,4), new Ficha(3,5), new Ficha(3,6), new Ficha(4,4), new Ficha(4,5), 
            new Ficha(4,6), new Ficha(5,5), new Ficha(5,6), new Ficha(6,6)
        };
        Ficha[] tablero = new Ficha[28];
        int cantidad_jugadores, cantidad_fichas_jugador, indiceTablero = -1;
        String nombre_jugador;
        Jugador[] jugadores = new Jugador[4];
        Scanner lector = new Scanner(System.in);
        System.out.println("Juego de domino");
        System.out.print("Ingrese la cantidad de jugadores(min 2, max 4): ");
        cantidad_jugadores = lector.nextInt();
        while (cantidad_jugadores < 2 || cantidad_jugadores > 4) {
            System.out.print("Ingrese la cantidad de jugadores(min 2, max 4): ");
            cantidad_jugadores = lector.nextInt();
        }
        if (cantidad_jugadores == 3){
            cantidad_fichas_jugador = 9;
            fichas_disponibles[0] = null;
        }
        else{
            cantidad_fichas_jugador = 28 / cantidad_jugadores;
        }
        for (int i = 0; i < cantidad_jugadores; ++i) {
            System.out.print("Ingrese el nombre del jugador: ");
            nombre_jugador = lector.next();
            jugadores[i] = new Jugador(nombre_jugador);
            reparteFichas(cantidad_fichas_jugador, jugadores[i], fichas_disponibles);
        }
        //aqui empieza el juego como tal
        do{
            for (int i = 0; i < cantidad_jugadores; ++i) {
                indiceTablero++;
                ingresarFicha(jugadores[i], tablero, indiceTablero);
                System.out.println("Tablero: " + muestraTablero(tablero, indiceTablero));        
            }
        }
        while (estadoJuego(indiceTablero, tablero, cantidad_jugadores, jugadores));
    }
    public static void reparteFichas(int cantidad_fichas_jugador, Jugador jugador, Ficha[] fichas_disponibles){
        //(int)Math.floor(Math.random()*(maxvalue-minvalue+1)+minvalue);
        Ficha[] fichas_jugador = new Ficha[cantidad_fichas_jugador];
        for (int i = 0; i < cantidad_fichas_jugador; ++i) {
            int indice = (int)Math.floor(Math.random() * (27 - 0 + 1) + 0);
            if (fichas_disponibles[indice] != null){
                fichas_jugador[i] = fichas_disponibles[indice];
                fichas_disponibles[indice] = null;
            }
            else{i--;}
        }
        jugador.setFichas(fichas_jugador);
    }
    public static boolean estadoJuego(int indiceTablero, Ficha[] tablero, int indiceJugador, Jugador[] jugadores){
        if (indiceTablero != -1){
            for (int j = 0; j < indiceJugador; ++j) {
                if (jugadores[j].getFichas().length == 0){
                    System.out.println("El ganador es: " + jugadores[j].getNombre());
                }
            }
            int extremoIzq = tablero[0].getValorIzq();
            int extremoDer = tablero[indiceTablero].getValorDer();
            for (int i = 0; i < indiceJugador; ++i) {
                Ficha[] fichas = jugadores[i].getFichas();
                for (int j = 0; j < fichas.length; ++j) {
                    if (fichas[j].getValorIzq() == extremoIzq || fichas[j].getValorDer() == extremoIzq
                        || fichas[j].getValorIzq() == extremoDer || fichas[j].getValorDer() == extremoDer){
                        return true;
                    }
                }    
            }
            return false;
        }
        else {
            return false;
        }
    }
    public static void ingresarFicha(Jugador jugador, Ficha[] tablero, int indiceTablero){
        Scanner lector = new Scanner(System.in);
        boolean activador = true;
        while (activador){
            System.out.println(jugador.getNombre() + " es su turno...");
            System.out.println(jugador.getFichasString());
            System.out.print("Ingrese el valor izq: ");
            int fichaValorIzq = lector.nextInt();
            System.out.print("Ingrese el valor der: ");
            int fichaValorDer = lector.nextInt();
            while (!verificarFicha(fichaValorIzq, fichaValorDer, jugador)){
                System.out.println(jugador.getNombre() + " ficha invalida!...");
                System.out.print("Ingrese el valor izq: ");
                fichaValorIzq = lector.nextInt();
                System.out.print("Ingrese el valor der: ");
                fichaValorDer = lector.nextInt();
            }
            if (indiceTablero == 0){
                tablero[indiceTablero] =  new Ficha(fichaValorIzq, fichaValorDer);
                activador = false;
            }
            else {
                if (tablero[indiceTablero - 1].getValorDer() == fichaValorIzq){
                    tablero[indiceTablero] =  new Ficha(fichaValorIzq, fichaValorDer);
                    activador = false;
                }
                else if(tablero[indiceTablero - 1].getValorDer() == fichaValorDer){
                    tablero[indiceTablero] =  new Ficha(fichaValorDer, fichaValorIzq);
                }
                else if(tablero[0].getValorIzq() == fichaValorIzq || tablero[0].getValorIzq() == fichaValorDer){
                    /*Ficha[] nuevo_tablero = new Ficha[28];
                    nuevo_tablero[0] = new Ficha(fichaValorIzq, fichaValorDer);
                    for (int j = 0; j < indiceTablero; ++j) {
                        nuevo_tablero[j + 1] = tablero[j];
                    }
                    tablero = nuevo_tablero;*/
                    activador = false;
                }
                else{
                    System.out.print("No se puede insertar la ficha!");
                }
            }
        }
    }
    public static boolean verificarFicha(int valorIzq, int valorDer, Jugador jugador){
        Ficha[] fichas = jugador.getFichas();
        Ficha[] nuevas_fichas;
        for (int j = 0; j < fichas.length; ++j) {
            if (fichas[j].getValorIzq() == valorIzq && fichas[j].getValorDer() == valorDer){
                nuevas_fichas = remueveElement(fichas, j);
                jugador.setFichas(nuevas_fichas);
                return true;
            }
        }
        return false;
    }
    public static Ficha[] remueveElement(Ficha[] arrayObjetos, int i) {
        Ficha[] nuevoArray = new Ficha[arrayObjetos.length - 1];
        if (i > 0){
            System.arraycopy(arrayObjetos, 0, nuevoArray, 0, i);
        }
        if (nuevoArray.length > i){
            System.arraycopy(arrayObjetos, i + 1, nuevoArray, i, nuevoArray.length - i);
        }
        return nuevoArray;
    }
    public static String muestraTablero(Ficha[] tablero, int indice){
        String res = "";
        for (int i = 0; i < indice + 1; ++i) {
            res += tablero[i] + " ";
        }
        return res;
    } 
}

class Jugador{
    private String nombre;
    private Ficha[] fichas;

    public Jugador(String nombre){
        this.nombre = nombre;
    }

    public void setNombre(String nombre){
        this.nombre = nombre;
    }

    public String getNombre(){
        return this.nombre;
    }

    public void setFichas(Ficha[] fichas){
        this.fichas = fichas;
    }

    public Ficha[] getFichas(){
        return this.fichas;
    }

    public String getFichasString(){
        String res = "";
        boolean unSeparador = true;
        for (int i = 0; i < this.fichas.length; ++i) {
            res += this.fichas[i].toString() + " ";
        }
        return res;
    }
}
class Ficha{
    private int valorIzq;
    private int valorDer;

    public Ficha(int valorIzq, int valorDer){
        this.valorIzq = valorIzq;
        this.valorDer = valorDer;
    }

    public int getValorIzq(){
        return this.valorIzq;
    }

    public void setValorIzq(int valorIzq){
        this.valorIzq = valorIzq;
    }

    public int getValorDer(){
        return this.valorDer;
    }

    public void setValorDer(int valorDer){
        this.valorDer = valorDer;
    }

    public String toString(){
        return "(" + this.valorIzq + "|" + this.valorDer + ")";
    }
}