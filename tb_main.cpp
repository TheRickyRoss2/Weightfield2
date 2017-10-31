#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Field.h"

TEST_CASE("INIT FIELD", "[field]"){
    Field *f;
    f = new Field();
    f->SetField(0, 0);
    SECTION("VERIFYING FIELD"){
      REQUIRE( f->GetFieldx()==0 );
      REQUIRE( f->GetFieldy()==0 );
    }
}
