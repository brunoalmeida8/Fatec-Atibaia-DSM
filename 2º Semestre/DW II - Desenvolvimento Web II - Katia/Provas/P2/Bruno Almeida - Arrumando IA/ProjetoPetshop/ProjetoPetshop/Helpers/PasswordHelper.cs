using System.Security.Cryptography;
using System.Text;

namespace ProjetoPetshop.Helpers
{
    public static class PasswordHelper
    {
        public static string GerarHash(string senha)
        {
            using (SHA256 sha256 = SHA256.Create())
            {
                byte[] bytes = sha256.ComputeHash(Encoding.UTF8.GetBytes(senha));
                return Convert.ToBase64String(bytes);
            }
        }
    }
}
