from django.contrib import admin
from hcserver.models import Question, Answer, UserData, AnswerLike, Tag

admin.site.register(Question)
admin.site.register(Answer)
admin.site.register(UserData)
admin.site.register(AnswerLike)
admin.site.register(Tag)



