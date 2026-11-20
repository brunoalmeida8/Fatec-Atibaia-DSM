//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        double[] leituras = {-10, 0, 25.5, 100, -300};

        for (int i = 0; i < leituras.length; i++) {
            double c = leituras[i];
            if (!ConversorTemperatura.ehValida(c)) {
                System.out.println(c + " °C: leitura inválida");
                continue;
            }
            double f = ConversorTemperatura.celsiusParaFahrenheit(c);
            double k = ConversorTemperatura.celsiusParaKelvin(c);
            System.out.println(c + " °C | " + f + " °F | " + k + " K");
        }

        double celsiusDe98_6F = ConversorTemperatura.fahrenheitParaCelsius(98.6);
        System.out.println("98.6 °F em Celsius: " + celsiusDe98_6F + " °C");
    }
}