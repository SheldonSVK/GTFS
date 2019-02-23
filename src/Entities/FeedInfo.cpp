#include <string>

using namespace std;

class FeedInfo
{
  private:
    string FeedPublisherName;
    string FeedPublisherURL;
    string FeedLang;
    string FeedStartDate;
    string FeedEndDate;
    string FeedVersion;
    string FeedContactEmail;
    string FeedContactURL;

  public:
    FeedInfo();
    FeedInfo(string feedpublishername, string feedpublisherurl, string feedlang, string feedstartdate, string feedenddate, string feedversion, string feedcontactemail, string feedcontacturl);
    ~FeedInfo();

    //Gets
    string GetFeedPublisherName() { return this->FeedPublisherName; }
    string GetFeedPublisherURL() { return this->FeedPublisherURL; }
    string GetFeedLang() { return this->FeedLang; }
    string GetFeedStartDate() { return this->FeedStartDate; }
    string GetFeedEndDate() { return this->FeedEndDate; }
    string GetFeedVersion() { return this->FeedVersion; }
    string GetFeedContactEmail() { return this->FeedContactEmail; }
    string GetFeedContactURL() { return this->FeedContactURL; }

    //Sets
    void SetFeedPublisherName(string feedpublishername) { this->FeedPublisherName = feedpublishername; }
    void SetFeedPublisherURL(string feedpublisherurl) { this->FeedPublisherURL = feedpublisherurl; }
    void SetFeedLang(string feedlang) { this->FeedLang = feedlang; }
    void SetFeedStartDate(string feedstartdate) { this->FeedStartDate = feedstartdate; }
    void SetFeedEndDate(string feedenddate) { this->FeedEndDate = feedenddate; }
    void SetFeedVersion(string feedversion) { this->FeedVersion = feedversion; }
    void SetFeedContactEmail(string feedcontactemail) { this->FeedContactEmail = feedcontactemail; }
    void SetFeedContactURL(string feedcontacturl) { this->FeedContactURL = feedcontacturl; }
};

FeedInfo::FeedInfo()
{
    this->FeedPublisherName.clear();
    this->FeedPublisherURL.clear();
    this->FeedLang.clear();
    this->FeedStartDate.clear();
    this->FeedEndDate.clear();
    this->FeedVersion.clear();
    this->FeedContactEmail.clear();
    this->FeedContactURL.clear();
}

FeedInfo::FeedInfo(string feedpublishername, string feedpublisherurl, string feedlang, string feedstartdate, string feedenddate, string feedversion, string feedcontactemail, string feedcontacturl)
{
    this->FeedPublisherName = FeedPublisherName;
    this->FeedPublisherURL = feedpublisherurl;
    this->FeedLang = feedlang;
    this->FeedStartDate = feedstartdate;
    this->FeedEndDate = feedenddate;
    this->FeedVersion = feedversion;
    this->FeedContactEmail = feedcontactemail;
    this->FeedContactURL = feedcontacturl;
}

FeedInfo::~FeedInfo()
{
}
