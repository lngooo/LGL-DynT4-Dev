define dso_local void @o(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %11
11:
  %12 = load i8*, i8** %2
  %13 = load i32, i32* %4
  %14 = sext i32 %13 to i64
  %15 = getelementptr inbounds i8, i8* %12, i64 %14
  %16 = load i8, i8* %15
  %17 = icmp ne i8 %16, 0
  br i1 %17, label %20, label %18
18:
  br label %73
20:
  %21 = load i8*, i8** %2
  %22 = load i32, i32* %4
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i8, i8* %21, i64 %23
  %25 = load i8, i8* %24
  store i8 %25, i8* %5
  %27 = load i8, i8* %5
  %28 = zext i8 %27 to i32
  %29 = xor i32 %28, 32
  %30 = icmp ne i32 %29, 0
  %31 = xor i1 %30, true
  %32 = zext i1 %31 to i32
  store i32 %32, i32* %6
  %34 = load i8, i8* %5
  %35 = zext i8 %34 to i32
  %36 = xor i32 %35, 9
  %37 = icmp ne i32 %36, 0
  %38 = xor i1 %37, true
  %39 = zext i1 %38 to i32
  store i32 %39, i32* %7
  %41 = load i8, i8* %5
  %42 = zext i8 %41 to i32
  %43 = xor i32 %42, 10
  %44 = icmp ne i32 %43, 0
  %45 = xor i1 %44, true
  %46 = zext i1 %45 to i32
  store i32 %46, i32* %8
  %47 = load i32, i32* %6
  %48 = load i32, i32* %7
  %49 = or i32 %47, %48
  %50 = load i32, i32* %8
  %51 = or i32 %49, %50
  %52 = icmp ne i32 %51, 0
  br i1 %52, label %66, label %53
53:
  %54 = load i8*, i8** %2
  %55 = load i32, i32* %4
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i8, i8* %54, i64 %56
  %58 = load i8, i8* %57
  %59 = load i8*, i8** %2
  %60 = load i32, i32* %3
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i8, i8* %59, i64 %61
  store i8 %58, i8* %62
  %63 = load i32, i32* %3
  %64 = xor i32 %63, -1
  %65 = sub nsw i32 0, %64
  store i32 %65, i32* %3
  br label %66
66:
  br label %70
70:
  %71 = load i32, i32* %4
  %72 = add nsw i32 %71, 1
  store i32 %72, i32* %4
  br label %11
73:
  %74 = load i8*, i8** %2
  %75 = load i32, i32* %3
  %76 = sext i32 %75 to i64
  %77 = getelementptr inbounds i8, i8* %74, i64 %76
  store i8 0, i8* %77
  ret void
}
