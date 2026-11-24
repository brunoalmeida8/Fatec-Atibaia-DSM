namespace ProjetoPetshop.Models
{
    public class DashboardViewModel
    {
        public int TotalClientes { get; set; }
        public int TotalPets { get; set; }
        public int TotalAtendimentos { get; set; }
        public int TotalVendas { get; set; }

        public decimal FaturamentoAtendimentos { get; set; }
        public decimal FaturamentoVendas { get; set; }

        public List<ServicoResumo> ServicosMaisUsados { get; set; }
    }

    public class ServicoResumo
    {
        public string Nome { get; set; }
        public int Quantidade { get; set; }
    }
}
