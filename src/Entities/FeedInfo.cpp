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
  FeedInfo(const string &feedpublishername, const string &feedpublisherurl, const string &feedlang, const string &feedstartdate, const string &feedenddate, const string &feedversion, const string &feedcontactemail, const string &feedcontacturl);
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
  void SetFeedPublisherName(const string &feedpublishername) { this->FeedPublisherName = feedpublishername; }
  void SetFeedPublisherURL(const string &feedpublisherurl) { this->FeedPublisherURL = feedpublisherurl; }
  void SetFeedLang(const string &feedlang) { this->FeedLang = feedlang; }
  void SetFeedStartDate(const string &feedstartdate) { this->FeedStartDate = feedstartdate; }
  void SetFeedEndDate(const string &feedenddate) { this->FeedEndDate = feedenddate; }
  void SetFeedVersion(const string &feedversion) { this->FeedVersion = feedversion; }
  void SetFeedContactEmail(const string &feedcontactemail) { this->FeedContactEmail = feedcontactemail; }
  void SetFeedContactURL(const string &feedcontacturl) { this->FeedContactURL = feedcontacturl; }
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

FeedInfo::FeedInfo(const string &feedpublishername, const string &feedpublisherurl, const string &feedlang, const string &feedstartdate, const string &feedenddate, const string &feedversion, const string &feedcontactemail, const string &feedcontacturl)
{
  SetFeedPublisherName(feedpublishername);
  SetFeedPublisherURL(feedpublisherurl);
  SetFeedLang(feedlang);
  SetFeedStartDate(feedstartdate);
  SetFeedEndDate(feedenddate);
  SetFeedVersion(feedversion);
  SetFeedContactEmail(feedcontactemail);
  SetFeedContactURL(feedcontacturl);
}

FeedInfo::~FeedInfo()
{
}
