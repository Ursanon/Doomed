#include "Gameplay/AmmoPickupActor.h"

#include "Characters/PlayerCharacter.h"

void AAmmoPickupActor::OnCollection_Implementation(class APlayerCharacter* collector)
{
	const float currentAmmo = collector->GetCurrentAmmo();
	const float maxAmmo = collector->GetMaxAmmo();

	if (currentAmmo == maxAmmo)
	{
		return;
	}

	collector->SetCurrentAmmo(maxAmmo);

	APickupActor::OnCollection_Implementation(collector);
}