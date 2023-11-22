#pragma once

class BootManager{
  public:
    static BootManager &Get();
    void Init();
};