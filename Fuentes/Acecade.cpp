// Autor:     Antonio Carrillo Ledesma.
// R.F.C.:    CAAN-691229-TV7
// Direcci�n: Amsterdam 312 col. Hip�dromo Condesa
// Tel�fono:  5-74-43-53

// Propiedad intelectual, todos los derechos reservados conforme a la ley, registro en tr�mite 1999-2000
// Revisi�n  1.1-A


#include <vcl\vcl.h>
#include "Acecade.h"
#pragma hdrstop


//---------------------------------------------------------------------------
#pragma resource "*.dfm"
//---------------------------------------------------------------------------
__fastcall TVAcercaDe::TVAcercaDe(TComponent* Owner) : TForm(Owner)
{
   // Nombre de la aplicaci�n
   Label10->Caption = Application->Title;
   // Fecha de generacion de la versi�n
   FechaGeneracion->Caption = __DATE__;
}
//---------------------------------------------------------------------------



