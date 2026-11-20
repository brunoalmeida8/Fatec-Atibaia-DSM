public class ConversorTemperatura {
    //atributos
    public static final double ZERO_ABSOLUTO_CELSIUS = -273.15;

    //construtores
    public ConversorTemperatura() {
    }

    //get e setters

    //metodos
    public static boolean ehValida(double celsius) {
        return celsius >= ZERO_ABSOLUTO_CELSIUS;
    }

    public static double celsiusParaFahrenheit(double celsius) {
        return (celsius * 9.0 / 5.0) + 32.0;
    }

    public static double fahrenheitParaCelsius(double fahrenheit) {
        return (fahrenheit - 32.0) * 5.0 / 9.0;
    }

    public static double celsiusParaKelvin(double celsius) {
        return celsius + 273.15;
    }
}