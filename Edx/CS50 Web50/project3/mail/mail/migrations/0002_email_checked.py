# Generated by Django 3.2.4 on 2021-06-30 02:27

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('mail', '0001_initial'),
    ]

    operations = [
        migrations.AddField(
            model_name='email',
            name='checked',
            field=models.BooleanField(default=False),
        ),
    ]
