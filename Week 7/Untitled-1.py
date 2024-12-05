const prompt = require("prompt-sync")();
let pilihan;
let jawabanBenar = 0;
let jawabanSalah = 0;
let done = false;
let kunciJawaban = ['a', 'b', 'b', 'a']
const jawaban = []
do {
  console.log("Mesin Jawaban")
  console.log("1. soal 1")
  console.log("2. soal 2")
  console.log("3. soal 3")
  console.log("4. soal 4")
  console.log("5. Keluar")

  pilihan = prompt("Masukkan pilihan soal: ")
  console.log("")

  switch (pilihan) {
    case '1':
      const isi1 = prompt("Masukkan jawaban soal no 1: ")
      done = false;
      for (jawab of jawaban) {
        if (jawab?.soal === 1) {
          jawab.jawaban = isi1
          done = true;
        }
      } 
      // [{soal: 2, jawaban: 'a'}]
      // Ketika kalian ingin edit jawaban.
      // sebelumnya misalkan jawaban soal 1 adalah a lalu ingin berubah
      //jadi b

      if (done === false) { //false
        jawaban.push({
          soal: 1,
          jawaban: isi1
        }) //[{soal: 2, jawaban: 'a'}, {soal:1, jawaban: b}]
      }
      break;
    case '2':
      const isi2 = prompt("Masukkan jawaban soal no 2: ")
      done = false;
      for (jawab of jawaban) {
        if (jawab?.soal === 2) {
          jawab.jawaban = isi2
          done = true;
        }
      }

      if (done === false) {
        jawaban.push({
          soal: 2,
          jawaban: isi2
        })
      }
      break;
    case '3':
      const isi3 = prompt("Masukkan jawaban soal no 3: ")
      done = false;
      for (jawab of jawaban) {
        if (jawab?.soal === 3) {
          jawab.jawaban = isi3
          done = true;
        }
      }

      if (done === false) {
        jawaban.push({
          soal: 3,
          jawaban: isi3
        })
      }
      break;

    case '4':
      const isi4 = prompt("Masukkan jawaban soal no 4: ")
      done = false;
      for (jawab of jawaban) {
        if (jawab?.soal === 4) {
          jawab.jawaban = isi4
          done = true;
        }
      }

      if (done === false) {
        jawaban.push({
          soal: 4,
          jawaban: isi4
        })
      }
      break;

    default:
      console.log("Terimakasih telah menggunakan sistem ini")
      console.log("Berikut adalah jawaban anda: ")
      console.log(jawaban)
      for (jawab of jawaban) {
        const noSoal = jawab.soal;
        if (jawab.jawaban === kunciJawaban[noSoal - 1]) {
          jawabanBenar++;
        } else {
          jawabanSalah++;
        }
      }
      console.log("Jawaban Benar: ", jawabanBenar)
      console.log("Jawaban Salah: ", jawabanSalah)
  }
} while (Number(pilihan) > 0 && Number(pilihan) < 5)