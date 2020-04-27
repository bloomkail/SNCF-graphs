#ifndef SOMMET_H
#define SOMMET_H
#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include "svg/svgfile.h"

class Sommet
{
    public:
        Sommet(int id, std::string nom, double x, double y);
        virtual ~Sommet();
        void affichage()const;
        int getId() { return m_id; }
        void setId(int id) { m_id=id; }
        std::vector<Sommet*> getAdjacents() { return m_adjacents; }
        void ajouterAdjacent(Sommet* adjacent) { m_adjacents.push_back(adjacent); }
        double getX () const { return m_x; }
        double getY () const { return m_y; }
        void dessiner (Svgfile&svgout);


    private:
        int m_id;
        std::string m_nom;
        double m_x;
        double m_y;
        std::vector<Sommet*> m_adjacents;
};

#endif // SOMMET_H
