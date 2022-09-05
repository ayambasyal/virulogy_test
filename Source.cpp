
#include <iostream>
#include <fstream>
#include <string>

void callBash(std::string genotype)
{
    std::string cmd = "export PATH=$PATH:/home/aayam/miniconda3/envs/test/bin \n blastx -query " +  genotype + " -out blast_output3 -db Human_pathogenic_bacterial_exotoxin.fasta ";
    //std::string cmd = "export PATH=$PATH:/home/aayam/miniconda3/envs/test/bin \n blastx -query " +  genotype + " -out blast_output4 -outfmt '10 evalue bitscore pident evalue qseqid' -db Human_pathogenic_bacterial_exotoxin.fasta ";

    const char* command = cmd.c_str();
    system(command);
}

int main()
{
    callBash("input.fasta");
    std::ifstream myfile; myfile.open("blast_output3.fasta");

    //std::string cml = "export PATH=$PATH:/home/aayam/miniconda3/envs/test/bin \n blastx -query input.fasta -out blast_output4 -outfmt '10 evalue ' -db Human_pathogenic_bacterial_exotoxin.fasta ";


    std::string cml = "export PATH=$PATH:/home/aayam/miniconda3/envs/test/bin \n blastx -query input.fasta -out blast_output4 -outfmt '10 stitle' -db Human_pathogenic_bacterial_exotoxin.fasta ";
    const char* comcml = cml.c_str();
    system(comcml);


    std::string cm = "export PATH=$PATH:/home/aayam/miniconda3/envs/test/bin \n blastx -query input.fasta -out blast_output5 -outfmt '10 evalue' -db Human_pathogenic_bacterial_exotoxin.fasta ";
    const char* comcm = cm.c_str();
    system(comcm);

    system("python main.py");
    return 0;
}


//    std::string cmd = "export PATH=$PATH:/home/aayam/miniconda3/envs/test/bin \n blastx -query " +  genotype + " -out blast_output3 -outfmt "10  pident evalue qseqid"  -db Human_pathogenic_bacterial_exotoxin.fasta ";
