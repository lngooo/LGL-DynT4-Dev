define dso_local void @nPS(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i8*
  %6 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %8 = load i8*, i8** %3
  store i8* %8, i8** %5
  %10 = load i32, i32* %4
  %11 = srem i32 %10, 26
  %12 = add nsw i32 %11, 26
  %13 = srem i32 %12, 26
  store i32 %13, i32* %6
  br label %14
14:
  %15 = load i8*, i8** %5
  %16 = load i8, i8* %15
  %17 = sext i8 %16 to i32
  %18 = icmp ne i32 %17, 0
  br i1 %18, label %19, label %66
19:
  %20 = load i8*, i8** %5
  %21 = load i8, i8* %20
  %22 = sext i8 %21 to i32
  %23 = icmp sge i32 %22, 65
  br i1 %23, label %24, label %40
24:
  %25 = load i8*, i8** %5
  %26 = load i8, i8* %25
  %27 = sext i8 %26 to i32
  %28 = icmp sle i32 %27, 90
  br i1 %28, label %29, label %40
29:
  %30 = load i8*, i8** %5
  %31 = load i8, i8* %30
  %32 = sext i8 %31 to i32
  %33 = sub nsw i32 %32, 65
  %34 = load i32, i32* %6
  %35 = add nsw i32 %33, %34
  %36 = srem i32 %35, 26
  %37 = add nsw i32 %36, 65
  %38 = trunc i32 %37 to i8
  %39 = load i8*, i8** %5
  store i8 %38, i8* %39
  br label %62
40:
  %41 = load i8*, i8** %5
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = icmp sge i32 %43, 97
  br i1 %44, label %45, label %61
45:
  %46 = load i8*, i8** %5
  %47 = load i8, i8* %46
  %48 = sext i8 %47 to i32
  %49 = icmp sle i32 %48, 122
  br i1 %49, label %50, label %61
50:
  %51 = load i8*, i8** %5
  %52 = load i8, i8* %51
  %53 = sext i8 %52 to i32
  %54 = sub nsw i32 %53, 97
  %55 = load i32, i32* %6
  %56 = add nsw i32 %54, %55
  %57 = srem i32 %56, 26
  %58 = add nsw i32 %57, 97
  %59 = trunc i32 %58 to i8
  %60 = load i8*, i8** %5
  store i8 %59, i8* %60
  br label %61
61:
  br label %62
62:
  br label %63
63:
  %64 = load i8*, i8** %5
  %65 = getelementptr inbounds i8, i8* %64, i32 1
  store i8* %65, i8** %5
  br label %14
66:
  ret void
}
