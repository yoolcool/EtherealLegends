// © 2014 - 2016 Soverance Studios
// http://www.soverance.com

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

// http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "Ethereal.h"
#include "LoadingScreen.h"

#define LOCTEXT_NAMESPACE "EtherealText"

void ULoadingScreen::HintConfig()
{
	FText Hint1 = LOCTEXT("Hint1", "Equipment  comes  in  four  classes  of  quality :  Common,  Uncommon,  Rare,  and  Epic.");
	HintList.Add(Hint1);
	FText Hint2 = LOCTEXT("Hint2", "The  rarest  items  are  dropped  from  boss  enemies.");
	HintList.Add(Hint2);
	FText Hint3 = LOCTEXT("Hint3", "Enemies  can  hear  your  footsteps.  Step  carefully  to  avoid  them!");
	HintList.Add(Hint3);
}

#undef LOCTEXT_NAMESPACE