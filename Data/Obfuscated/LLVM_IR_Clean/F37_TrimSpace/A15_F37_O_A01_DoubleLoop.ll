define dso_local void @THmT(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %8
8:
  %9 = load i8*, i8** %2
  %10 = load i32, i32* %4
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds i8, i8* %9, i64 %11
  %13 = load i8, i8* %12
  %14 = icmp ne i8 %13, 0
  br i1 %14, label %17, label %15
15:
  br label %67
17:
  %18 = load i8*, i8** %2
  %19 = load i32, i32* %4
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i8, i8* %18, i64 %20
  %22 = load i8, i8* %21
  %23 = zext i8 %22 to i32
  %24 = call i32 @isspace(i32 %23)
  %25 = icmp ne i32 %24, 0
  br i1 %25, label %38, label %26
26:
  %27 = load i8*, i8** %2
  %28 = load i32, i32* %4
  %29 = add nsw i32 %28, 1
  store i32 %29, i32* %4
  %30 = sext i32 %28 to i64
  %31 = getelementptr inbounds i8, i8* %27, i64 %30
  %32 = load i8, i8* %31
  %33 = load i8*, i8** %2
  %34 = load i32, i32* %3
  %35 = add nsw i32 %34, 1
  store i32 %35, i32* %3
  %36 = sext i32 %34 to i64
  %37 = getelementptr inbounds i8, i8* %33, i64 %36
  store i8 %32, i8* %37
  br label %66
38:
  %40 = load i32, i32* %4
  store i32 %40, i32* %5
  br label %41
41:
  %42 = load i8*, i8** %2
  %43 = load i32, i32* %5
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i8, i8* %42, i64 %44
  %46 = load i8, i8* %45
  %47 = sext i8 %46 to i32
  %48 = icmp ne i32 %47, 0
  br i1 %48, label %49, label %58
49:
  %50 = load i8*, i8** %2
  %51 = load i32, i32* %5
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %50, i64 %52
  %54 = load i8, i8* %53
  %55 = zext i8 %54 to i32
  %56 = call i32 @isspace(i32 %55)
  %57 = icmp ne i32 %56, 0
  br label %58
58:
  %59 = phi i1 [ false, %41 ], [ %57, %49 ]
  br i1 %59, label %60, label %63
60:
  %61 = load i32, i32* %5
  %62 = add nsw i32 %61, 1
  store i32 %62, i32* %5
  br label %41
63:
  %64 = load i32, i32* %5
  store i32 %64, i32* %4
  br label %66
66:
  br label %8
67:
  %68 = load i8*, i8** %2
  %69 = load i32, i32* %3
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i8, i8* %68, i64 %70
  store i8 0, i8* %71
  ret void
}
declare i32 @isspace(i32)
