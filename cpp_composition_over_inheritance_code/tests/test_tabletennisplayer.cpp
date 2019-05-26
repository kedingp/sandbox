#include <gtest/gtest.h>
#include <cpp_composition_over_inheritance_code/tabletennisplayer.h>
#include <cpp_composition_over_inheritance_code/i_strokable.h>
#include <cpp_composition_over_inheritance_code/forehandstroker.h>
#include <cpp_composition_over_inheritance_code/backhandstroker.h>

TEST(TableTennisPlayerTest, Constructor) {
    std::unique_ptr<table_tennis::I_Strokable> strokeBehaviour (new table_tennis::ForehandStroker());;
    table_tennis::TableTennisPlayer maLong(strokeBehaviour);
}

TEST(TableTennisPlayerTest, forehandStroke) {
    std::unique_ptr<table_tennis::I_Strokable> forehandStroker (new table_tennis::ForehandStroker());
    table_tennis::TableTennisPlayer maLong(forehandStroker);

    testing::internal::CaptureStdout();
    maLong.stroke();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ("Stroke with forehand!\n", output);
}

TEST(TableTennisPlayerTest, backhandStroke) {
    std::unique_ptr<table_tennis::I_Strokable> backhandStroker (new table_tennis::BackhandStroker());
    table_tennis::TableTennisPlayer maLong(backhandStroker);

    testing::internal::CaptureStdout();
    maLong.stroke();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ("Stroke with backhand!\n", output);

    std::unique_ptr<table_tennis::I_Strokable> forehandStroker (new table_tennis::ForehandStroker());
    maLong.setStroke(forehandStroker);

    testing::internal::CaptureStdout();
    maLong.stroke();
    std::string output2 = testing::internal::GetCapturedStdout();
    ASSERT_EQ("Stroke with forehand!\n", output2);
}

TEST(ForehandStroker, stroke)
{
    table_tennis::ForehandStroker forehandStroker;

    testing::internal::CaptureStdout();
    forehandStroker.stroke();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ("Stroke with forehand!\n", output);
}

TEST(ForehandStroker, override)
{
    std::unique_ptr<table_tennis::I_Strokable> strokeBehaviour(new table_tennis::ForehandStroker());

    testing::internal::CaptureStdout();
    strokeBehaviour->stroke();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ("Stroke with forehand!\n", output);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
