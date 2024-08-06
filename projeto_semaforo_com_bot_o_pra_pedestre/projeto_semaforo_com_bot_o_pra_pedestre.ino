// Definição dos pinos dos LEDs para o semáforo de carros
int semaforoCarrosVermelho = 10;
int semaforoCarrosAmarelo = 9;
int semaforoCarrosVerde = 8;

// Definição dos pinos dos LEDs para o semáforo de pedestres
int semaforoPedestresVermelho = 13;
int semaforoPedestresVerde = 12;

// Definição dos tempos de espera em milissegundos
int T1 = 5000; // 5 segundos
int T2 = 2000; // 2 segundos
int T3 = 5000; // 5 segundos

void setup() {
  // Configuração dos pinos como saídas
  pinMode(semaforoCarrosVermelho, OUTPUT);
  pinMode(semaforoCarrosAmarelo, OUTPUT);
  pinMode(semaforoCarrosVerde, OUTPUT);
  pinMode(semaforoPedestresVermelho, OUTPUT);
  pinMode(semaforoPedestresVerde, OUTPUT);
}

void loop() {
  // Ciclo do semáforo de carros
  verdeParaCarros();
  amareloParaCarros();
  
  // Ciclo do semáforo de pedestres
  vermelhoParaCarros();
  verdeParaPedestres();
}

// Função para o ciclo de verde para carros
void verdeParaCarros() {
  digitalWrite(semaforoCarrosVerde, HIGH);
  digitalWrite(semaforoCarrosAmarelo, LOW);
  digitalWrite(semaforoCarrosVermelho, LOW);
  digitalWrite(semaforoPedestresVerde, LOW);
  digitalWrite(semaforoPedestresVermelho, HIGH);
  delay(T1); // 5 segundos
}

// Função para o ciclo de amarelo para carros
void amareloParaCarros() {
  digitalWrite(semaforoCarrosVerde, LOW);
  digitalWrite(semaforoCarrosAmarelo, HIGH);
  digitalWrite(semaforoCarrosVermelho, LOW);
  delay(T2); // 2 segundos
}

// Função para o ciclo de vermelho para carros
void vermelhoParaCarros() {
  digitalWrite(semaforoCarrosVerde, LOW);
  digitalWrite(semaforoCarrosAmarelo, LOW);
  digitalWrite(semaforoCarrosVermelho, HIGH);
}

// Função para o ciclo de verde para pedestres
void verdeParaPedestres() {
  digitalWrite(semaforoCarrosVerde, LOW);
  digitalWrite(semaforoCarrosAmarelo, LOW);
  digitalWrite(semaforoCarrosVermelho, HIGH);
  digitalWrite(semaforoPedestresVerde, HIGH);
  digitalWrite(semaforoPedestresVermelho, LOW);
  delay(T3); // 5 segundos
}
