#pragma once

enum class FrameStage {

    UNDEFINED = -1,
    START,
    NET_UPDATE_START,
    NET_UPDATE_POSTDATAUPDATE_START,
    NET_UPDATE_POSTDATAUPDATE_END,
    NET_UPDATE_END,
    RENDER_START,
    RENDER_END
};