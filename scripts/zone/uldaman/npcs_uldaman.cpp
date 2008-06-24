/* Copyright (C) 2006 - 2008 ScriptDev2 <https://scriptdev2.svn.sourceforge.net/>
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

/* ScriptData
SDName: Npcs_Uldaman
SD%Complete: 100
SDComment: Quest support: 2278.
SDCategory: Uldaman
EndScriptData */

#include "sc_creature.h"
#include "sc_gossip.h"

/*######
## npc_lore_keeper_of_norgannon
######*/

bool GossipHello_npc_lore_keeper_of_norgannon(Player *player, Creature *_Creature)
{
    if (player->GetQuestStatus(2278) == QUEST_STATUS_INCOMPLETE)
        player->ADD_GOSSIP_ITEM( 0, "Who are the Earthen?", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+1);

    player->SEND_GOSSIP_MENU(1079, _Creature->GetGUID());

    return true;
}

bool GossipSelect_npc_lore_keeper_of_norgannon(Player *player, Creature *_Creature, uint32 sender, uint32 action)
{
    switch (action)
    {
        case GOSSIP_ACTION_INFO_DEF+1:
            player->ADD_GOSSIP_ITEM( 0, "What is a \"subterranean being matrix\"?", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+2);
            player->SEND_GOSSIP_MENU(1080, _Creature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+2:
            player->ADD_GOSSIP_ITEM( 0, "What are the anomalies you speak of?", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+3);
            player->SEND_GOSSIP_MENU(1081, _Creature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+3:
            player->ADD_GOSSIP_ITEM( 0, "What is a resilient foundation of construction?", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+4);
            player->SEND_GOSSIP_MENU(1082, _Creature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+4:
            player->ADD_GOSSIP_ITEM( 0, "So... the Earthen were made out of stone?", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+5);
            player->SEND_GOSSIP_MENU(1083, _Creature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+5:
            player->ADD_GOSSIP_ITEM( 0, "Anything else I should know about the Earthen?", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+6);
            player->SEND_GOSSIP_MENU(1084, _Creature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+6:
            player->ADD_GOSSIP_ITEM( 0, "I think I understand the Creators' design intent for the Earthen now. What are the Earthen's anomalies that you spoke of earlier?", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+7);
            player->SEND_GOSSIP_MENU(1085, _Creature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+7:
            player->ADD_GOSSIP_ITEM( 0, "What high-stress environments would cause the Earthen to destabilize?", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+8);
            player->SEND_GOSSIP_MENU(1086, _Creature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+8:
            player->ADD_GOSSIP_ITEM( 0, "What happens when the Earthen destabilize?", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+9);
            player->SEND_GOSSIP_MENU(1087, _Creature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+9:
            player->ADD_GOSSIP_ITEM( 0, "Troggs?! Are the troggs you mention the same as the ones in the world today?", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+10);
            player->SEND_GOSSIP_MENU(1088, _Creature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+10:
            player->ADD_GOSSIP_ITEM( 0, "You mentioned two results when the Earthen destabilize. What is the second?", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+11);
            player->SEND_GOSSIP_MENU(1089, _Creature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+11:
            player->ADD_GOSSIP_ITEM( 0, "Dwarves!!! Now you're telling me that dwarves originally came from the Earthen?!", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+12);
            player->SEND_GOSSIP_MENU(1090, _Creature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+12:
            player->ADD_GOSSIP_ITEM( 0, "These dwarves are the same ones today, yes? Do the dwarves maintain any other links to the Earthen?", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+13);
            player->SEND_GOSSIP_MENU(1091, _Creature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+13:
            player->ADD_GOSSIP_ITEM( 0, "Who are the Creators?", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+14);
            player->SEND_GOSSIP_MENU(1092, _Creature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+14:
            player->ADD_GOSSIP_ITEM( 0, "This is a lot to think about.", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+15);
            player->SEND_GOSSIP_MENU(1093, _Creature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+15:
            player->ADD_GOSSIP_ITEM( 0, "I will access the discs now.", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+16);
            player->SEND_GOSSIP_MENU(1094, _Creature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+16:
            player->CLOSE_GOSSIP_MENU();
            player->AreaExploredOrEventHappens(2278);
            break;
    }
    return true;
}

void AddSC_npcs_uldaman()
{
    Script *newscript;

    newscript = new Script;
    newscript->Name="npc_lore_keeper_of_norgannon";
    newscript->pGossipHello = &GossipHello_npc_lore_keeper_of_norgannon;
    newscript->pGossipSelect = &GossipSelect_npc_lore_keeper_of_norgannon;
    m_scripts[nrscripts++] = newscript;
}