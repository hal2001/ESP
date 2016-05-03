#pragma once

class Stream {
  public:
    /**
     Start the stream.
     */
    virtual bool start() { has_started_ = true; return true; }
    virtual void stop() { has_started_ = false; }

    void toggle() {
        if (has_started_) { stop(); }
        else { start(); }
    }
    
    bool hasStarted() { return has_started_; }

  protected:
    bool has_started_;

};