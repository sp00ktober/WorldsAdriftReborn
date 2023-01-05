﻿using NetCoreServer;

namespace WorldsAdriftServer.Handlers.SocialScreen
{
    internal class RejectInviteHandler : Handler
    {
        internal override string Method { get; } = "PUT";
        internal override string[] URLs { get; } = { "/memberships/invite/reject/" };
        internal override bool CheckSteamToken { get; } = false;
        internal override bool CheckCharacterToken { get; } = true;
        internal override bool Handle( HttpSession httpSession, HttpRequest httpRequest )
        {
            throw new NotImplementedException();
        }
    }
}
